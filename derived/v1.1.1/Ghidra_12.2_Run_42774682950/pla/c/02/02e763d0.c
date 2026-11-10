/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e763d0; name: FUN_02e763d0
 */


undefined8 FUN_02e763d0(undefined8 *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((*(uint *)(DAT_0440a128 + 0x20) < (param_2 * 8 + 0x14 & 0xfffc)) ||
     (lVar5 = FUN_02e7de5c(DAT_0440a128,0x10), lVar5 == 0)) {
    uVar6 = 0x1f;
  }
  else {
    *(undefined4 *)(lVar5 + 4) = param_3;
    *(uint *)(lVar5 + 8) = param_2;
    if ((param_2 != 0) && (*(undefined8 *)(lVar5 + 0xc) = *param_1, 1 < param_2)) {
      uVar7 = 1;
      do {
        uVar8 = uVar7 & 0xffff;
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar1;
        *(undefined8 *)((undefined4 *)(lVar5 + 4) + uVar8 * 2 + 2) = param_1[uVar8];
      } while ((uVar1 & 0xffff) < param_2);
    }
    piVar2 = (int *)(DAT_0440a128 + 0x9c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar6 = 1;
  }
  return uVar6;
}


