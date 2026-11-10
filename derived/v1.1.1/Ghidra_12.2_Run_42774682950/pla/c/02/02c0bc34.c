/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c0bc34; name: FUN_02c0bc34
 */


void FUN_02c0bc34(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  char cVar9;
  bool bVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  long *local_88;
  long *local_80;
  char *local_78;
  undefined8 local_70;
  long *local_68;
  
  puVar13 = *(undefined8 **)(param_1 + 0x280);
  for (puVar15 = *(undefined8 **)(param_1 + 0x278); puVar15 != puVar13; puVar15 = puVar15 + 1) {
    local_78 = "default";
    local_80 = (long *)&DAT_afc4d6c05abef19e;
    local_70 = 7;
    local_68 = (long *)0x0;
    plVar11 = (long *)FUN_02a9b144(*puVar15,&local_80);
    plVar5 = *(long **)(*plVar11 + 0xf0);
    for (plVar11 = *(long **)(*plVar11 + 0xe8); plVar11 != plVar5; plVar11 = plVar11 + 1) {
      plVar6 = *(long **)(*plVar11 + 0x98);
      for (plVar3 = *(long **)(*plVar11 + 0x90); plVar3 != plVar6; plVar3 = plVar3 + 1) {
        plVar7 = *(long **)(*plVar3 + 0x80);
        for (plVar4 = *(long **)(*plVar3 + 0x78); plVar4 != plVar7; plVar4 = plVar4 + 1) {
          plVar8 = *(long **)(*plVar4 + 0xe8);
          for (plVar16 = *(long **)(*plVar4 + 0xe0); plVar16 != plVar8; plVar16 = plVar16 + 1) {
            FUN_02bb6fe4(*(undefined8 *)(*plVar16 + 0x60),1,1);
          }
        }
      }
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    FUN_009c69bc(&local_80,*puVar15);
    lVar12 = FUN_02a9842c(local_80 + 0x1e,&local_88);
    if (local_80 != (long *)0x0) {
      lVar14 = local_80[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar2 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
    if ((lVar12 != 0) &&
       (lVar14 = *(long *)(lVar12 + 0x200),
       (int)((ulong)(*(long *)(lVar14 + 0xa0) - *(long *)(lVar14 + 0x98)) >> 3) * -0x33333333 != 0))
    {
      uVar17 = 0;
      do {
        FUN_02b3365c(&local_88,*(undefined8 *)(lVar14 + 0x58),
                     *(long *)(lVar14 + 0x98) + uVar17 * 0x28);
        local_80 = (long *)0x66fc45fa453c27fc;
        local_78 = "WorldInstanceFadeParams";
        local_70 = 0x17;
        local_68 = (long *)0x0;
        (**(code **)(*(long *)(local_88[0xc] + 0x58) + 0x30))
                  ((long *)(local_88[0xc] + 0x58),&local_80,param_2);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (local_88 != (long *)0x0) {
          plVar11 = local_88 + 10;
          do {
            iVar2 = (int)*plVar11 + -1;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar10) {
              *(int *)plVar11 = iVar2;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar2 == 0) {
            (**(code **)(*local_88 + 0x10))();
          }
        }
        lVar14 = *(long *)(lVar12 + 0x200);
        uVar17 = uVar17 + 1;
      } while (uVar17 < (uint)((int)((ulong)(*(long *)(lVar14 + 0xa0) - *(long *)(lVar14 + 0x98)) >>
                                    3) * -0x33333333));
    }
  }
  return;
}


