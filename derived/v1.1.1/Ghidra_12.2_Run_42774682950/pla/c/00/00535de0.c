/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00535de0; name: FUN_00535de0
 */


void FUN_00535de0(long *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  iVar6 = (int)*(undefined8 *)(*(long *)(*param_2 + 0x18) + 0x90);
  puVar4 = (ulong *)param_2[8];
  if (param_2[0xb] != 0) {
    iVar6 = (iVar6 + 0xfU & 0xfffffff0) + (int)param_2[0xb];
  }
  do {
    uVar7 = *puVar4;
    uVar1 = uVar7 + ((ulong)(iVar6 + 0x7f) & 0xfffffff0);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4[1] < uVar1) {
    lVar5 = FUN_003f5a34();
  }
  else {
    lVar5 = (long)puVar4 + uVar7 + 0x20;
  }
  local_90 = *param_2;
  *param_2 = 0;
  lStack_80 = param_2[2];
  local_88 = param_2[1];
  lStack_70 = param_2[4];
  local_78 = param_2[3];
  lStack_60 = param_2[6];
  local_68 = param_2[5];
  lStack_50 = param_2[8];
  local_58 = param_2[7];
  lStack_40 = param_2[10];
  local_48 = param_2[9];
  local_38 = param_2[0xb];
                    /* try { // try from 00535e98 to 00535ea7 has its CatchHandler @ 00535ec8 */
  FUN_00535edc(lVar5,&local_90,param_3);
  *param_1 = lVar5;
  FUN_0052ea88(&local_90);
  return;
}


