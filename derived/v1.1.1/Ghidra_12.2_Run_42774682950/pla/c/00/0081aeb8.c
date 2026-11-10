/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081aeb8; name: FUN_0081aeb8
 */


long * FUN_0081aeb8(long *param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  if ((param_2 & 0xfffffffffffffff8) < 0x129) {
    return (long *)0x0;
  }
  FUN_0081d5b4(param_1,param_3,0,param_1,param_2 & 0xfffffffffffffff8,1,param_4 & 1);
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *param_1 = (long)(PTR_DAT_04377b40 + 0x10);
  param_1[0x1b] = (long)(param_1 + 0x1b);
  param_1[0x1c] = (long)(param_1 + 0x1b);
  param_1[0x1f] = (long)(param_1 + 0x1e);
  param_1[0x20] = -0x100000000;
  param_1[0x1d] = -0x100000000;
  param_1[0x1e] = (long)(param_1 + 0x1e);
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    plVar3 = (long *)0x0;
    *(undefined4 *)((long)param_1 + 0xec) = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 0;
    iVar1 = (int)param_1[0x11];
  }
  else {
    plVar3 = param_1 + 0x12;
    FUN_0082481c(plVar3);
    *(undefined4 *)((long)param_1 + 0xec) = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 0;
    FUN_00824824(plVar3);
    if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
      plVar3 = (long *)0x0;
      iVar1 = (int)param_1[0x11];
    }
    else {
      FUN_0082481c(plVar3);
      iVar1 = (int)param_1[0x11];
    }
  }
  if (iVar1 == 1) {
    plVar2 = param_1 + 0x21;
  }
  else {
    plVar2 = (long *)param_1[6];
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  *(undefined4 *)(plVar2 + 2) = 0;
  plVar2[3] = 0;
  plVar2[3] = param_1[7] + -0x128;
  FUN_0081afdc(param_1);
  if (plVar3 != (long *)0x0) {
    FUN_00824824(plVar3);
  }
  return param_1;
}


