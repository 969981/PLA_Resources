/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008074bc; name: FUN_008074bc
 */


void FUN_008074bc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_007ec3f0();
  puVar1 = PTR_DAT_04377868;
  param_1[0xb] = param_2;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  uVar2 = FUN_007e336c();
  lVar3 = FUN_0081a750(0x68,uVar2);
  if (lVar3 != 0) {
    FUN_00807898(lVar3,param_2);
  }
  param_1[0xd] = lVar3;
  uVar2 = FUN_007e336c();
  lVar3 = FUN_0081a750(0x30,uVar2);
  if (lVar3 != 0) {
    FUN_007e5b70(lVar3);
  }
  param_1[0xe] = lVar3;
  return;
}


