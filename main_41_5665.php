<!-- main.php - Comprehensive PHP starter script -->
<?php
class Project {
    public $name;
    public $version;

    public function __construct($name, $version) {
        $this->name = $name;
        $this->version = $version;
    }

    public function display() {
        echo "Project: {$this->name}, Version: {$this->version}\n";
    }
}

$p = new Project("GitHub Automated Repository Project", "1.0.0");
$p->display();
echo "\nFeatures: Classes, Constructors, Loops\n";
for ($i = 0; $i < 5; $i++) {
    echo "  - Iteration " . ($i + 1) . "\n";
}
?>
