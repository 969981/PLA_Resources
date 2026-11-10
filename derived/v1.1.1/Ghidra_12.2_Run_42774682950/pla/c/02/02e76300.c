/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e76300; name: FUN_02e76300
 */


undefined8 FUN_02e76300(undefined8 param_1,undefined8 *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((*(uint *)(DAT_0440a128 + 0x20) < (param_3 * 8 + 0x1c & 0xfffc)) ||
     (lVar6 = FUN_02e7de5c(DAT_0440a128,0xe), lVar6 == 0)) {
    uVar5 = 0x1f;
  }
  else {
    *(undefined4 *)(lVar6 + 0xc) = param_4;
    *(undefined8 *)(lVar6 + 4) = param_1;
    *(uint *)(lVar6 + 0x10) = param_3;
    if ((param_3 != 0) && (*(undefined8 *)(lVar6 + 0x14) = *param_2, 1 < param_3)) {
      uVar7 = 1;
      do {
        uVar8 = uVar7 & 0xffff;
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar1;
        *(undefined8 *)((undefined4 *)(lVar6 + 0xc) + uVar8 * 2 + 2) = param_2[uVar8];
      } while ((uVar1 & 0xffff) < param_3);
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
    uVar5 = 1;
  }
  return uVar5;
}


