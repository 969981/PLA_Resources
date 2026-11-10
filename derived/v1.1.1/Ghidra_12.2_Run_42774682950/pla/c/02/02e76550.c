/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e76550; name: FUN_02e76550
 */


undefined8
FUN_02e76550(undefined4 param_1,char *param_2,undefined8 param_3,int param_4,undefined4 param_5,
            byte param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  size_t sVar5;
  size_t sVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte local_164 [260];
  
  if (param_2 == (char *)0x0) {
LAB_02e766e0:
    uVar8 = 0xf;
  }
  else {
    sVar5 = strlen(param_2);
    sVar6 = 0x103;
    if (sVar5 + 1 < 0x103) {
      sVar6 = sVar5 + 1;
    }
    strncpy((char *)local_164,param_2,sVar6);
    local_164[sVar6] = 0;
    sVar6 = strlen(param_2);
    if (sVar6 != 0) {
      pbVar9 = local_164;
      sVar5 = sVar6;
      do {
        if (*pbVar9 - 0x41 < 0x1a) {
          *pbVar9 = *pbVar9 + 0x20;
        }
        sVar5 = sVar5 - 1;
        pbVar9 = pbVar9 + 1;
      } while (sVar5 != 0);
    }
    uVar11 = 0x811c9dc5;
    if ((int)sVar6 != 0) {
      pbVar9 = local_164;
      do {
        pbVar10 = pbVar9 + 1;
        uVar11 = uVar11 * 0x1000193 ^ (uint)*pbVar9;
        pbVar9 = pbVar10;
      } while (pbVar10 < local_164 + (sVar6 & 0xffffffff));
      if (uVar11 == 0) goto LAB_02e766e0;
    }
    if ((param_4 == 0) && ((param_6 & 1) == 0)) {
      lVar7 = FUN_02e7de5c(DAT_0440a128,2,0x18);
      *(uint *)(lVar7 + 0xc) = uVar11;
      *(undefined4 *)(lVar7 + 0x10) = param_1;
      *(undefined8 *)(lVar7 + 4) = param_3;
      *(undefined4 *)(lVar7 + 0x14) = 0;
      piVar1 = (int *)(DAT_0440a128 + 0x9c);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar8 = 1;
    }
    else {
      uVar4 = FUN_02e7d4d0();
      lVar7 = FUN_02e7de5c(DAT_0440a128,3,uVar4);
      *(uint *)(lVar7 + 0xc) = uVar11;
      *(undefined4 *)(lVar7 + 0x10) = param_1;
      *(undefined8 *)(lVar7 + 4) = param_3;
      *(byte *)(lVar7 + 0x20) = param_6 & 1;
      *(undefined4 *)(lVar7 + 0x14) = 0;
      *(int *)(lVar7 + 0x18) = param_4;
      *(undefined4 *)(lVar7 + 0x1c) = param_5;
      piVar1 = (int *)(DAT_0440a128 + 0x9c);
      uVar8 = 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return uVar8;
}


