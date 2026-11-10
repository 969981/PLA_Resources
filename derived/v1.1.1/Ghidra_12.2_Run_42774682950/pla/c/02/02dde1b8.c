/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dde1b8; name: FUN_02dde1b8
 */


void FUN_02dde1b8(ulong param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float fVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined8 local_50;
  undefined8 local_48;
  
  FUN_028a5cd4(&local_50,*(undefined8 *)(param_2 + 0x80));
  cVar8 = *(char *)((long)local_50 + 0x33c);
  if (local_50 != (long *)0x0) {
    lVar12 = local_50[0xb];
    piVar3 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar3;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar10) {
        *piVar3 = iVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (cVar8 == '\0') {
    if (*(char *)(param_2 + 0x158) != '\0') {
      FUN_02dde52c(param_2,*(undefined4 *)(param_2 + 0x15c));
      *(undefined1 *)(param_2 + 0x158) = 0;
    }
    if (*(char *)(param_2 + 0x150) != '\0') {
      param_1 = (ulong)*(uint *)(param_2 + 0x154);
      *(undefined1 *)(param_2 + 0x150) = 0;
    }
    if ((*(int *)(param_2 + 0x90) == 3) &&
       ((*(long *)(param_2 + 0xc0) == 0 || (*(int *)(*(long *)(param_2 + 0xc0) + 0xc) == 0)))) {
      FUN_02dde52c(param_2,1);
      cVar8 = *(char *)(param_2 + 0x10c);
    }
    else {
      cVar8 = *(char *)(param_2 + 0x10c);
    }
    if (cVar8 == '\0') {
      FUN_02ddf020(param_1,param_2);
      FUN_02ddfb14(param_1,param_2);
      puVar11 = PTR_DAT_04379570;
      lVar12 = *(long *)(param_2 + 0x110);
      lVar15 = *(long *)(param_2 + 0x118);
      if (lVar12 != lVar15) {
        iVar7 = *(int *)(lVar12 + 0x380);
        while (-1 < iVar7) {
          local_50 = *(long **)puVar11;
          local_48 = *(undefined8 *)(puVar11 + 8);
          if (*(char *)(lVar12 + 0x60) != '\0') {
            local_48 = *(undefined8 *)(lVar12 + 0x108);
            local_50 = *(long **)(lVar12 + 0x100);
          }
          auVar17 = FUN_02de1f40(param_2,lVar12 + 0x20,iVar7,&local_50);
          *(undefined1 (*) [16])(lVar12 + 0x3d0) = auVar17;
          if (lVar15 == lVar12 + 0x450) {
            return;
          }
          iVar7 = *(int *)(lVar12 + 2000);
          lVar12 = lVar12 + 0x450;
        }
      }
    }
    else {
      lVar12 = *(long *)(param_2 + 0x110);
      if (0 < (int)((ulong)(*(long *)(param_2 + 0x118) - lVar12) >> 4) * -0x5cc0ed73) {
        lVar13 = 0;
        lVar15 = 0x420;
        do {
          puVar5 = (undefined4 *)(lVar12 + lVar15);
          lVar15 = lVar15 + 0x450;
          puVar5[-0x36] = puVar5[-0x37];
          *puVar5 = puVar5[-0xf2];
          puVar5[-1] = puVar5[-3];
          puVar5[-0xf2] = 0;
          puVar5[-3] = 0x47c35000;
          lVar13 = lVar13 + 1;
          lVar12 = *(long *)(param_2 + 0x110);
        } while (lVar13 < (int)((ulong)(*(long *)(param_2 + 0x118) - lVar12) >> 4) * -0x5cc0ed73);
      }
      FUN_02ddf020(param_1,param_2);
      FUN_02ddfb14(param_1,param_2);
      puVar11 = PTR_DAT_04379570;
      lVar12 = *(long *)(param_2 + 0x110);
      lVar15 = *(long *)(param_2 + 0x118);
      if (lVar12 != lVar15) {
        iVar7 = *(int *)(lVar12 + 0x380);
        while (-1 < iVar7) {
          local_50 = *(long **)puVar11;
          local_48 = *(undefined8 *)(puVar11 + 8);
          if (*(char *)(lVar12 + 0x60) != '\0') {
            local_48 = *(undefined8 *)(lVar12 + 0x108);
            local_50 = *(long **)(lVar12 + 0x100);
          }
          auVar17 = FUN_02de1f40(param_2,lVar12 + 0x20,iVar7,&local_50);
          *(undefined1 (*) [16])(lVar12 + 0x3d0) = auVar17;
          if (lVar15 == lVar12 + 0x450) break;
          iVar7 = *(int *)(lVar12 + 2000);
          lVar12 = lVar12 + 0x450;
        }
        lVar12 = *(long *)(param_2 + 0x110);
        lVar15 = *(long *)(param_2 + 0x118);
      }
      *(undefined1 *)(param_2 + 0x10c) = 0;
      if (0 < (int)((ulong)(lVar15 - lVar12) >> 4) * -0x5cc0ed73) {
        lVar14 = 0;
        lVar13 = 0x414;
        do {
          puVar5 = (undefined4 *)(lVar12 + lVar13);
          lVar13 = lVar13 + 0x450;
          puVar5[-0xef] = puVar5[3];
          *puVar5 = puVar5[2];
          lVar12 = *(long *)(param_2 + 0x110);
          lVar15 = *(long *)(param_2 + 0x118);
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)((ulong)(lVar15 - lVar12) >> 4) * -0x5cc0ed73);
      }
      local_50._0_4_ = 0.0;
      if (lVar12 == lVar15) {
        *(undefined4 *)(param_2 + 0xd4) = 0;
      }
      else if (*(int *)(param_2 + 0x90) == 1) {
        local_50._0_4_ = 0.0;
        do {
          pfVar2 = (float *)(lVar12 + 0x58);
          if (*(float *)(lVar12 + 0x58) <= (float)local_50) {
            pfVar2 = (float *)&local_50;
          }
          local_50 = (long *)CONCAT44(local_50._4_4_,*pfVar2);
          pfVar1 = (float *)(lVar12 + 0x418);
          pfVar4 = (float *)(lVar12 + 0x418);
          lVar12 = lVar12 + 0x450;
          if (*pfVar1 <= *pfVar2) {
            pfVar4 = (float *)&local_50;
          }
          local_50._0_4_ = *pfVar4;
        } while (lVar15 != lVar12);
        *(float *)(param_2 + 0xd4) = (float)local_50;
      }
      else {
        fVar16 = 0.0;
        do {
          pfVar2 = (float *)(lVar12 + 0x58);
          lVar12 = lVar12 + 0x450;
          fVar6 = *pfVar2;
          if (*pfVar2 <= fVar16) {
            fVar6 = fVar16;
          }
          fVar16 = fVar6;
        } while (lVar15 != lVar12);
        *(float *)(param_2 + 0xd4) = fVar6;
      }
    }
  }
  return;
}


