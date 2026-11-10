/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087c080; name: FUN_0087c080
 */


uint FUN_0087c080(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int local_24;
  
  puVar2 = PTR_DAT_04378468;
  (**(code **)PTR_DAT_04378468)(param_1,0x28,&local_24);
  bVar3 = local_24 != 0;
  (**(code **)puVar2)(param_1,0x29,&local_24);
  uVar1 = (uint)bVar3;
  if (local_24 != 0) {
    uVar1 = bVar3 | 2;
  }
  (**(code **)puVar2)(param_1,0x2a,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 4;
  }
  (**(code **)puVar2)(param_1,0x32,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 8;
  }
  (**(code **)puVar2)(param_1,0x3b,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 0x10;
  }
  (**(code **)puVar2)(param_1,0x42,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 0x20;
  }
  (**(code **)puVar2)(param_1,0x43,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 0x40;
  }
  (**(code **)puVar2)(param_1,0x44,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 0x80;
  }
  (**(code **)puVar2)(param_1,0x45,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 0x100;
  }
  (**(code **)puVar2)(param_1,0x47,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 0x200;
  }
  (**(code **)puVar2)(param_1,0x48,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 0x400;
  }
  (**(code **)puVar2)(param_1,0x49,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 0x800;
  }
  (**(code **)puVar2)(param_1,0x4a,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  (**(code **)puVar2)(param_1,0x4b,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 0x2000;
  }
  (**(code **)puVar2)(param_1,0x4c,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 0x4000;
  }
  (**(code **)puVar2)(param_1,0x57,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 0x8000;
  }
  (**(code **)puVar2)(param_1,0x5a,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 0x10000;
  }
  return uVar1;
}


