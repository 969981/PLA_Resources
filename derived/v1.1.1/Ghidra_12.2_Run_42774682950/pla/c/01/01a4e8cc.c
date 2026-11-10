/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4e8cc; name: FUN_01a4e8cc
 */


void FUN_01a4e8cc(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  float *pfVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_68;
  float local_64;
  
  uVar7 = (**(code **)(*param_1 + 0xf0))();
  puVar5 = PTR_DAT_0437a558;
  puVar4 = PTR_DAT_0437a550;
  if ((uVar7 & 1) != 0) {
    if (((((char)param_1[0xd0] != '\0') && ((char)param_1[0x114] == '\0')) &&
        (lVar8 = param_1[0x115], lVar8 != 0)) && (*(int *)(lVar8 + 0xc) != 0)) {
      piVar1 = (int *)(lVar8 + 0xc);
      iVar12 = *(int *)(lVar8 + 0xc);
      do {
        plVar13 = *(long **)(lVar8 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar9 = FUN_00aa0310();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01a4e90c;
          if (plVar13 == (long *)puVar5) break;
          plVar13 = (long *)*plVar13;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar12) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01a4eb80;
          lVar8 = *(long *)(lVar8 + 0x18);
          if (lVar8 != 0) {
            if ((*(long *)(lVar8 + 0x1a0) != 0) && (*(int *)(*(long *)(lVar8 + 0x1a0) + 0xc) != 0))
            {
              FUN_01a4ec4c(param_1);
            }
            lVar11 = *(long *)(lVar8 + 8);
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 + -1 != 0) break;
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*(long *)(lVar8 + -0x50) + 0x20))((long *)(lVar8 + -0x50));
            cVar2 = *(char *)((long)param_1 + 0x8a3);
            goto joined_r0x01a4ec14;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01a4eb80:
        iVar12 = iVar6;
      } while (iVar6 != 0);
    }
LAB_01a4e90c:
    cVar2 = *(char *)((long)param_1 + 0x8a3);
joined_r0x01a4ec14:
    if (cVar2 != '\0') {
      lVar8 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      fVar15 = (float)((double)*(long *)(lVar8 + 8) / 1000000000.0);
      fVar17 = *(float *)((long)param_1 + 0x214);
      if (*(float *)(param_1 + 0x3f) != fVar17) {
        fVar14 = *(float *)((long)param_1 + 0x20c);
        if (*(float *)(param_1 + 0x41) < fVar14) {
          local_64 = *(float *)(param_1 + 0x41) + fVar15;
          pfVar10 = (float *)((long)param_1 + 0x20c);
          if (local_64 <= fVar14) {
            pfVar10 = &local_64;
          }
          local_68 = 0.0;
          if (local_64 < 0.0) {
            pfVar10 = &local_68;
          }
          fVar16 = *pfVar10;
          *(float *)(param_1 + 0x41) = fVar16;
          fVar18 = *(float *)(param_1 + 0x42);
          fVar14 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_1 + 0x43) * 8))
                                    (fVar16 / fVar14);
          *(float *)(param_1 + 0x3f) = fVar18 + (fVar17 - fVar18) * fVar14;
          (**(code **)(*param_1 + 0x180))(param_1);
        }
      }
      fVar17 = *(float *)((long)param_1 + 0x34c);
      if (*(float *)(param_1 + 0x66) != fVar17) {
        fVar14 = *(float *)((long)param_1 + 0x344);
        if (*(float *)(param_1 + 0x68) < fVar14) {
          local_64 = *(float *)(param_1 + 0x68) + fVar15;
          pfVar10 = (float *)((long)param_1 + 0x344);
          if (local_64 <= fVar14) {
            pfVar10 = &local_64;
          }
          local_68 = 0.0;
          if (local_64 < 0.0) {
            pfVar10 = &local_68;
          }
          fVar16 = *pfVar10;
          *(float *)(param_1 + 0x68) = fVar16;
          fVar18 = *(float *)(param_1 + 0x69);
          fVar14 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_1 + 0x6a) * 8))
                                    (fVar16 / fVar14);
          *(float *)(param_1 + 0x66) = fVar18 + (fVar17 - fVar18) * fVar14;
          (**(code **)(*param_1 + 400))(param_1);
        }
      }
      fVar17 = *(float *)((long)param_1 + 0x40c);
      if (*(float *)(param_1 + 0x7e) != fVar17) {
        fVar14 = *(float *)((long)param_1 + 0x404);
        if (*(float *)(param_1 + 0x80) < fVar14) {
          local_64 = *(float *)(param_1 + 0x80) + fVar15;
          pfVar10 = (float *)((long)param_1 + 0x404);
          if (local_64 <= fVar14) {
            pfVar10 = &local_64;
          }
          local_68 = 0.0;
          if (local_64 < 0.0) {
            pfVar10 = &local_68;
          }
          fVar15 = *pfVar10;
          *(float *)(param_1 + 0x80) = fVar15;
          fVar16 = *(float *)(param_1 + 0x81);
          fVar15 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_1 + 0x82) * 8))
                                    (fVar15 / fVar14);
          *(float *)(param_1 + 0x7e) = fVar16 + (fVar17 - fVar16) * fVar15;
          (**(code **)(*param_1 + 0x170))(param_1);
        }
      }
    }
    iVar12 = *(int *)((long)param_1 + 0x9bc);
    *(bool *)(param_1 + 0x137) = iVar12 != 0;
    if (iVar12 != 0) {
      *(int *)((long)param_1 + 0x9bc) = iVar12 + -1;
    }
  }
  return;
}


