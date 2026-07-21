#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>

// 定义最小距离常数 D
const double D = 5.0;

// 坐标点类
class Point {
private:
    double x;  // x坐标
    double y;  // y坐标

public:
    // 构造函数
    Point(double x_, double y_) : x(x_), y(y_) {}

    // 获取x坐标
    double getX() const {
        return x;
    }

    // 获取y坐标
    double getY() const {
        return y;
    }

    // 计算两个点之间的欧几里得距离
    double distance(const Point& other) const {
        double dx = x - other.x;
        double dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }
};

// 静态容器：永久保留所有生成的Point实例
static std::vector<Point> allPoints;

// 生成满足距离约束的新点函数
void generateValidPoint() {
    double newX, newY;
    bool isValid;

    // 循环生成坐标，直到满足距离约束
    do {
        isValid = true;
        // 随机生成 0~100 范围内的坐标（可自行修改范围）
        newX = rand() % 101;
        newY = rand() % 101;

        // 创建临时点，用于校验
        Point tempPoint(newX, newY);

        // 校验：与所有已存在的点距离都 ≥ D
        for (const auto& p : allPoints) {
            if (tempPoint.distance(p) < D) {
                isValid = false;
                break;
            }
        }
    } while (!isValid);

    // 将合法的点加入容器，永久保留
    allPoints.emplace_back(newX, newY);
    std::cout << "生成有效点：(" << newX << ", " << newY << ")" << std::endl;
}

// 打印所有保留的点
void printAllPoints() {
    std::cout << "\n所有已保留的点坐标:" << std::endl;
    for (size_t i = 0; i < allPoints.size(); ++i) {
        std::cout << " " << i+1 << ": (" 
                  << allPoints[i].getX() << ", " 
                  << allPoints[i].getY() << ")" << std::endl;
    }
}

int main() {
    // 初始化随机数种子
    srand(time(0));

    // 测试：生成5个满足约束的点
    std::cout << "开始生成坐标点(最小距离 D = " << D << ")" << std::endl;
    for (int i = 0; i < 5; ++i) {
        generateValidPoint();
    }

    // 打印所有保留的实例
    printAllPoints();

    return 0;
}