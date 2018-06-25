```
git clone https://github.com/Bareflank/hypervisor
git clone https://github.com/boddumanohar/bf_virt_to_phys.git
mkdir build; cd build
cmake ../hypervisor -DDEFAULT_VMM=example_vmm -DEXTENSION=../bf_virt_to_phys
make -j<# cores + 1>
```


```
gcc test.c -o test
./test
```
