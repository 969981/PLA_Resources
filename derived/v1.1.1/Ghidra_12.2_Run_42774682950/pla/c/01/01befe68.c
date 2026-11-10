/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01befe68; name: FUN_01befe68
 */


void FUN_01befe68(long param_1)

{
  undefined8 uVar1;
  
  FUN_01a55e88();
  *(undefined1 *)(param_1 + 0xc70) = 0;
  *(undefined4 *)(param_1 + 0xc98) = 1;
  *(undefined1 *)(param_1 + 0xcc0) = 0;
  FUN_01a50188(0x3f800000,param_1,&DAT_04247970);
  FUN_01a50188(0x3f800000,param_1,&DAT_04247988);
  FUN_01a50188(0x3f800000,param_1,&DAT_042479a0);
  FUN_01a50188(0x3f800000,param_1,&DAT_042479b8);
  uVar1 = 0x3f800000;
  if ((*(ulong *)(param_1 + 0x1288) & 2) != 0) {
    uVar1 = 0;
  }
  *(ulong *)(param_1 + 0x1288) = *(ulong *)(param_1 + 0x1288) & 0xfffffffffffffffe;
  FUN_01a50188(uVar1,param_1,&DAT_042479d0);
  uVar1 = 0x3f800000;
  if ((*(ulong *)(param_1 + 0x1288) & 3) != 0) {
    uVar1 = 0;
  }
  FUN_01a50188(uVar1,param_1,&DAT_042479e8);
  *(ulong *)(param_1 + 0x1288) = *(ulong *)(param_1 + 0x1288) & 0xfffffffffffffffc;
  FUN_01a50188(0x3f800000,param_1,&DAT_042479d0);
  FUN_01a50188(0x3f800000,param_1,&DAT_042479e8);
  return;
}


