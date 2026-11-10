/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081d5b4; name: FUN_0081d5b4
 */


void FUN_0081d5b4(long *param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6,uint param_7)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  
  FUN_0081e820(param_1,param_3,1);
  puVar6 = PTR_DAT_04377ba0;
  param_1[4] = (long)(PTR_DAT_043773d0 + 0x10);
  lVar7 = *(long *)(param_2 + 8);
  *param_1 = (long)(puVar6 + 0x10);
  param_1[7] = param_5;
  param_1[8] = param_3;
  plVar1 = param_1 + 0x12;
  param_1[5] = lVar7;
  param_1[6] = param_4;
  param_1[9] = (long)(param_1 + 9);
  param_1[10] = (long)(param_1 + 9);
  param_1[0xb] = -0x100000000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x11) = param_6;
  param_1[0xf] = (long)(param_1 + 0xe);
  param_1[0x10] = -0x100000000;
  param_1[0xd] = 0;
  param_1[0xe] = (long)(param_1 + 0xe);
  FUN_00824790(plVar1,param_3);
  *(undefined2 *)(param_1 + 0x1a) = 4;
  puVar6 = PTR_DAT_04377ba8;
  do {
    iVar3 = *(int *)puVar6;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar5) {
      *(int *)puVar6 = iVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(short *)((long)param_1 + 0xd2) = (short)iVar3;
  uVar2 = *(ushort *)(param_1 + 0x1a) | 1;
  if ((param_7 & 1) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x1a) & 0xfffe;
  }
  *(ushort *)(param_1 + 0x1a) = uVar2;
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)((long)param_1 + 0x5c) = 0x60;
    *(undefined4 *)((long)param_1 + 0x84) = 0x10;
    return;
  }
  FUN_0082481c(plVar1);
  *(undefined4 *)((long)param_1 + 0x5c) = 0x60;
  *(undefined4 *)((long)param_1 + 0x84) = 0x10;
  FUN_00824824(plVar1);
  return;
}


