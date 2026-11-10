/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c2684; name: FUN_030c2684
 */


void FUN_030c2684(long param_1,long param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar15 = *(long *)(param_2 + 8);
  fVar16 = *(float *)(lVar15 + 0x888);
  lVar14 = *(long *)(lVar15 + 0x490);
  iVar4 = *(int *)(lVar14 + 0xc60);
  if (0.0 < fVar16 || iVar4 != 0) {
    local_68 = CONCAT44(fVar16,fVar16);
    local_70 = *(undefined8 *)(lVar15 + 0x540);
    lVar8 = *(long *)(lVar15 + 0x150);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    puVar1 = (uint *)(param_1 + 0x34);
    do {
      uVar7 = *puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar11 = *(uint *)(param_1 + 0x30);
    if (uVar7 < uVar11) {
      if (iVar4 == 0) {
        do {
          lVar14 = lVar15 + (long)(int)uVar7 * 0x18;
          if (1 < *(int *)(lVar14 + 0x188)) {
            lVar13 = *(long *)(lVar15 + 0x38);
            lVar12 = 1;
            do {
              uVar11 = *(uint *)(lVar8 + (ulong)*(uint *)(*(long *)(lVar15 + (long)(int)uVar7 * 0x18
                                                                   + 0x180) + lVar12 * 4) * 0x80 +
                                0x48);
              uVar10 = uVar11;
              do {
                FUN_030c28d0(*(undefined4 *)(lVar13 + (ulong)(uVar10 & 0xffffff) * 0xc0 + 0x50),
                             &local_70,lVar15 + 0x28,lVar8,&local_68);
                lVar13 = *(long *)(lVar15 + 0x38);
                uVar10 = *(uint *)(lVar13 + (ulong)(uVar10 & 0xffffff) * 0xc0 + 0x84);
              } while (uVar10 != uVar11);
              lVar12 = lVar12 + 1;
            } while (lVar12 < *(int *)(lVar14 + 0x188));
            uVar11 = *(uint *)(param_1 + 0x30);
          }
          do {
            uVar7 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar7 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        } while (uVar7 < uVar11);
      }
      else {
        do {
          lVar12 = lVar15 + (long)(int)uVar7 * 0x18;
          if (1 < *(int *)(lVar12 + 0x188)) {
            lVar9 = *(long *)(lVar15 + 0x38);
            lVar13 = 1;
            do {
              uVar11 = *(uint *)(lVar8 + (ulong)*(uint *)(*(long *)(lVar15 + (long)(int)uVar7 * 0x18
                                                                   + 0x180) + lVar13 * 4) * 0x80 +
                                0x48);
              uVar10 = uVar11;
              do {
                FUN_030c2930(*(undefined4 *)(lVar9 + (ulong)(uVar10 & 0xffffff) * 0xc0 + 0x50),
                             &local_70,lVar15 + 0x28,lVar8,uVar2,uVar3,lVar14,param_2,&local_68);
                lVar9 = *(long *)(lVar15 + 0x38);
                uVar10 = *(uint *)(lVar9 + (ulong)(uVar10 & 0xffffff) * 0xc0 + 0x84);
              } while (uVar10 != uVar11);
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)(lVar12 + 0x188));
            uVar11 = *(uint *)(param_1 + 0x30);
          }
          do {
            uVar7 = *puVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar7 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        } while (uVar7 < uVar11);
      }
    }
  }
  return;
}


