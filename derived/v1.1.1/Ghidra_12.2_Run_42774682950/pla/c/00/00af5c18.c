/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00af5c18; name: FUN_00af5c18
 */


void FUN_00af5c18(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar8 = *param_2;
  if (lVar8 == 0) {
LAB_00af5c38:
    lVar13 = 0;
  }
  else if (*(int *)(lVar8 + 0xc) == 0) {
    lVar13 = 0;
  }
  else {
    piVar1 = (int *)(lVar8 + 0xc);
    puVar9 = (undefined8 *)PTR_DAT_0437a6a8;
    pbVar10 = PTR_DAT_0437a6a0;
    iVar11 = *(int *)(lVar8 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar8 + 0x10);
      if ((*pbVar10 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(PTR_DAT_0437a6a0);
        puVar9 = (undefined8 *)PTR_DAT_0437a6a8;
        pbVar10 = PTR_DAT_0437a6a0;
        if (iVar6 != 0) {
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar7 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar7;
            __cxa_guard_release(puVar4);
          }
          *puVar9 = puVar5;
          pbVar10 = PTR_DAT_0437a6a0;
          __cxa_guard_release(PTR_DAT_0437a6a0);
        }
      }
      if (puVar12 == (undefined8 *)0x0) goto LAB_00af5c38;
      while (puVar12 != puVar9) {
        puVar12 = (undefined8 *)*puVar12;
        lVar13 = 0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_00af5c3c;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = 0;
          if (*(long *)(lVar8 + 0x18) != 0) {
            lVar13 = *(long *)(lVar8 + 0x18) + -8;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      lVar13 = 0;
      iVar11 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00af5c3c:
  *param_1 = lVar13;
  return;
}


