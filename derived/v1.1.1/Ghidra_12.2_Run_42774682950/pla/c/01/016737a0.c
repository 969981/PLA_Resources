/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016737a0; name: FUN_016737a0
 */


undefined1 * FUN_016737a0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar10 = 0;
    do {
      uVar2 = *(long *)(param_1 + 0xd0) + uVar10;
      plVar9 = *(long **)(*(long *)(*(long *)(param_1 + 0x98) + (uVar2 >> 6 & 0x3fffffffffffff8)) +
                         (uVar2 & 0x1ff) * 8);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar8 = plVar9[0xb];
      if (lVar8 < 0x466c5dfffa6047de) {
        if (lVar8 < 0x388689e19b68d6f9) {
          if (lVar8 == -0x15f70fc9d835aca1) {
            puVar7 = (undefined1 *)0x82c7348d2a2223d8;
          }
          else if (lVar8 == -0x3234e1bb7a429b54) {
            puVar7 = (undefined1 *)0xf1c6e8bbc87f3b74;
          }
          else {
            puVar7 = &DAT_cbf29ce484222645;
            if (lVar8 == 0x1608695374913ba9) goto LAB_01673948;
          }
        }
        else {
          puVar3 = (undefined1 *)0x82f74dc648175484;
          if (lVar8 != 0x388689e19b68d6f9) {
            puVar3 = &DAT_cbf29ce484222645;
          }
          puVar7 = (undefined1 *)0x1e5f23d6f19e85d9;
          if (lVar8 != 0x4393e4fd10599008) {
            puVar7 = puVar3;
          }
        }
      }
      else if (lVar8 == 0x466c5dfffa6047de) {
LAB_01673948:
        puVar7 = (undefined1 *)FUN_01673270(plVar9,0);
      }
      else {
        puVar7 = (undefined1 *)0x2c76bf417af09da9;
        if (lVar8 != 0x512653c97af7f269) {
          puVar7 = &DAT_cbf29ce484222645;
        }
      }
      plVar1 = plVar9 + 10;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      if (puVar7 != &DAT_cbf29ce484222645) {
        return puVar7;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ulong *)(param_1 + 0xd8));
  }
  return &DAT_cbf29ce484222645;
}


