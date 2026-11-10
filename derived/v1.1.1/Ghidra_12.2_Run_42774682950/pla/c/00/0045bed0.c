/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045bed0; name: FUN_0045bed0
 */


undefined8 FUN_0045bed0(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  size_t sVar13;
  int *piVar14;
  size_t __n;
  undefined8 uVar15;
  undefined1 auStack_90 [15];
  char local_81 [17];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  if (param_1 == 0) {
    return 1;
  }
  iVar6 = 0;
  while (iVar4 = FUN_00407950(param_1), iVar6 < iVar4 + -1) {
    puVar8 = (undefined8 *)FUN_00407970(param_1,iVar6);
    iVar6 = iVar6 + 1;
    puVar9 = (undefined8 *)FUN_00407970(param_1,iVar6);
    iVar7 = *(int *)*puVar8;
    iVar2 = *(int *)*puVar9;
    iVar4 = iVar2;
    if (iVar7 - iVar2 == 0 || iVar7 < iVar2) {
      iVar4 = iVar7;
    }
    iVar5 = memcmp(*(void **)((int *)*puVar8 + 2),*(void **)((int *)*puVar9 + 2),(long)iVar4);
    iVar4 = iVar7 - iVar2;
    if (iVar5 != 0) {
      iVar4 = iVar5;
    }
    if (-1 < iVar4) {
      return 0;
    }
  }
  iVar6 = FUN_00407950(param_1);
  if (iVar6 < 1) {
    return 1;
  }
  iVar6 = 0;
  puVar8 = (undefined8 *)FUN_00407970(param_1,0);
  if (puVar8 == (undefined8 *)0x0) {
    return 0;
  }
  do {
    piVar14 = (int *)*puVar8;
    if (((piVar14 == (int *)0x0) ||
        (puVar12 = *(undefined1 **)(piVar14 + 2), puVar12 == (undefined1 *)0x0)) || (*piVar14 < 2))
    {
      __n = 0;
      piVar14 = (int *)puVar8[1];
    }
    else {
      uVar1 = 0x10;
      if (CONCAT11(*puVar12,puVar12[1]) != 2) {
        uVar1 = (uint)(CONCAT11(*puVar12,puVar12[1]) == 1) << 2;
      }
      __n = (size_t)uVar1;
      piVar14 = (int *)puVar8[1];
    }
    if (piVar14 == (int *)0x0) {
      return 0;
    }
    if (*piVar14 != 0) {
      if (*piVar14 != 1) {
        return 0;
      }
      uVar15 = *(undefined8 *)(piVar14 + 2);
      uVar10 = FUN_00407950(uVar15);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      iVar4 = FUN_00407950(uVar15);
      if (1 < iVar4) {
        iVar4 = 0;
        do {
          piVar14 = (int *)FUN_00407970(uVar15,iVar4);
          iVar4 = iVar4 + 1;
          uVar10 = FUN_00407970(uVar15,iVar4);
          uVar11 = FUN_0045bcf0(piVar14,auStack_60,auStack_70,__n);
          if ((int)uVar11 == 0) {
            return uVar11;
          }
          uVar10 = FUN_0045bcf0(uVar10,local_81 + 1,auStack_90,__n);
          if ((int)uVar10 == 0) {
            return uVar10;
          }
          iVar7 = memcmp(auStack_60,local_81 + 1,__n);
          if (-1 < iVar7) {
            return 0;
          }
          iVar7 = memcmp(auStack_60,auStack_70,__n);
          if (0 < iVar7) {
            return 0;
          }
          iVar7 = memcmp(local_81 + 1,auStack_90,__n);
          if (0 < iVar7) {
            return 0;
          }
          sVar13 = __n;
          do {
            if ((long)sVar13 < 1) break;
            cVar3 = local_81[sVar13];
            local_81[sVar13] = cVar3 + -1;
            sVar13 = sVar13 - 1;
          } while (cVar3 == '\0');
          iVar7 = memcmp(auStack_70,local_81 + 1,__n);
          if (-1 < iVar7) {
            return 0;
          }
          if ((*piVar14 == 1) && (iVar7 = FUN_0045c230(auStack_60,auStack_70,__n), -1 < iVar7)) {
            return 0;
          }
          iVar7 = FUN_00407950(uVar15);
        } while (iVar4 < iVar7 + -1);
      }
      iVar4 = FUN_00407950(uVar15);
      piVar14 = (int *)FUN_00407970(uVar15,iVar4 + -1);
      if ((piVar14 != (int *)0x0) && (*piVar14 == 1)) {
        uVar10 = FUN_0045bcf0(piVar14,auStack_60,auStack_70,__n);
        if ((int)uVar10 == 0) {
          return uVar10;
        }
        iVar4 = memcmp(auStack_60,auStack_70,__n);
        if (0 < iVar4) {
          return 0;
        }
        iVar4 = FUN_0045c230(auStack_60,auStack_70,__n);
        if (-1 < iVar4) {
          return 0;
        }
      }
    }
    iVar6 = iVar6 + 1;
    iVar4 = FUN_00407950(param_1);
    if (iVar4 <= iVar6) {
      return 1;
    }
    puVar8 = (undefined8 *)FUN_00407970(param_1,iVar6);
    if (puVar8 == (undefined8 *)0x0) {
      return 0;
    }
  } while( true );
}


