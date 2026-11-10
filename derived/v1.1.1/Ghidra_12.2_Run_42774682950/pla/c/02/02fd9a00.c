/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fd9a00; name: FUN_02fd9a00
 */


void FUN_02fd9a00(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  FUN_02fe0000(0,param_1,4,4,4,8,0,0,0x80);
  *param_1 = &PTR_LAB_042ba2d0;
  *(undefined2 *)((long)param_1 + 0x1a) = 0x2c3;
  iVar2 = *(int *)(param_1 + 10);
  puVar1 = (undefined8 *)0x0;
  if (iVar2 != 0) {
    puVar1 = (undefined8 *)((long)iVar2 + (long)(param_1 + 10));
  }
  *puVar1 = 0x7f0400047f040000;
  puVar1[1] = 0x7f0400007f040000;
  iVar2 = *(int *)(param_1 + 0xb);
  puVar1 = (undefined8 *)0x0;
  if (iVar2 != 0) {
    puVar1 = (undefined8 *)((long)iVar2 + (long)(param_1 + 0xb));
  }
  *puVar1 = 0x300010203020100;
  *(undefined2 *)(param_1 + 0xe) = 0x7f7f;
  param_1[1] = 0x110;
  return;
}


