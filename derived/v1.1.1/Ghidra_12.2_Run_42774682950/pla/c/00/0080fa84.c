/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080fa84; name: FUN_0080fa84
 */


void FUN_0080fa84(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_007ec3f0();
  plVar1 = param_1 + 0xc;
  *param_1 = (long)(PTR_DAT_04377978 + 0x10);
  FUN_007f0ce0(plVar1);
  FUN_007f0ce0(param_1 + 0x10);
  FUN_007f0ce0(param_1 + 0x14);
  FUN_007f0ce0(param_1 + 0x18);
  FUN_007f0ce0(param_1 + 0x1c);
  FUN_007f0ce0(param_1 + 0x20);
  FUN_007f0ce0(param_1 + 0x24);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  FUN_007e5b70(param_1 + 0x2b);
  param_1[0x31] = param_2;
  uVar2 = FUN_007e336c();
  lVar3 = FUN_0081a750(0x88,uVar2);
  if (lVar3 != 0) {
    FUN_00810094(lVar3,param_2);
  }
  param_1[0xb] = lVar3;
  FUN_007f0d58(plVar1);
  FUN_007f0d58(param_1 + 0x10);
  FUN_007f0d58(param_1 + 0x14);
  FUN_007f0d58(param_1 + 0x18);
  FUN_007f0d58(param_1 + 0x1c);
  FUN_007f0d58(param_1 + 0x20);
  FUN_007f0d58(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = (long)plVar1;
  param_1[0x29] = 7;
  return;
}


