/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f3d3c; name: FUN_001f3d3c
 */


long FUN_001f3d3c(long *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auStack_c0 [128];
  
  lVar2 = nnsocketRecv(*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600),param_3,param_4,0);
  *param_5 = 0;
  if (lVar2 == -1) {
    iVar1 = nnsocketGetLastErrno();
    if ((iVar1 == 0xb) || (iVar1 == 4)) {
      uVar4 = 0x51;
    }
    else {
      lVar5 = *param_1;
      uVar3 = FUN_001f8d80(iVar1,auStack_c0,0x80);
      FUN_001f3ae0(lVar5,"Recv failure: %s",uVar3);
      *(int *)(*param_1 + 0x11c0) = iVar1;
      uVar4 = 0x38;
    }
    *param_5 = uVar4;
  }
  return lVar2;
}


