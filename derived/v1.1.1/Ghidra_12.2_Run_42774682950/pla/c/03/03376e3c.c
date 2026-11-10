/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03376e3c; name: FUN_03376e3c
 */


void FUN_03376e3c(long param_1,undefined8 *param_2,byte *param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  short sVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  short *psVar17;
  long lVar18;
  long lVar19;
  int local_36c;
  undefined1 *local_368;
  undefined1 *puStack_360;
  undefined1 local_358 [16];
  ulong local_348;
  long local_340;
  int local_338;
  ulong local_330;
  long local_2a8;
  byte **ppbStack_2a0;
  undefined8 **local_298;
  ulong local_238;
  undefined8 *local_1a0;
  ulong local_190;
  byte *local_78;
  undefined8 *local_70 [2];
  
  local_78 = param_3;
  local_70[0] = param_2;
  if (*(long *)(param_3 + 8) != 0) {
    uVar4 = FUN_033767d0(param_1,*(long *)(param_3 + 8),param_4);
    param_2[1] = uVar4;
  }
  uVar3 = (uint)*param_2;
  if ((uVar3 >> 2 & 1) == 0) goto joined_r0x03376fcc;
  if (((*param_3 & 1) == 0) || (puVar10 = (ulong *)FUN_032e2008(param_3,1), puVar10 == (ulong *)0x0)
     ) {
switchD_03376f48_caseD_0:
    do {
    } while( true );
  }
  uVar16 = *puVar10;
  switch((uint)uVar16 & 0x1f) {
  case 0:
  case 1:
    goto switchD_03376f48_caseD_0;
  case 2:
    if (*(char *)(param_1 + 6) == '\0') goto switchD_03376f48_caseD_4;
    puVar14 = (undefined8 *)FUN_032e1fa4(param_2,1);
    *puVar14 = 0x2002;
    puVar14 = &DAT_0444a750;
    break;
  case 3:
    if (*(char *)(param_1 + 6) != '\0') {
      puVar10 = (ulong *)FUN_032e1fa4(param_2,1);
      puVar14 = (undefined8 *)0x0;
      *puVar10 = uVar16 & 0x80 | 3;
      break;
    }
  default:
    puVar14 = (undefined8 *)0x0;
    break;
  case 4:
  case 5:
switchD_03376f48_caseD_4:
    FUN_032dd9d0();
    puVar14 = (undefined8 *)FUN_032e3508();
  }
  puVar12 = (undefined8 *)FUN_032e1fa4(local_70[0],4);
  *puVar12 = puVar14;
joined_r0x03376fcc:
  if ((uVar3 >> 0xf & 1) != 0) {
    lVar5 = FUN_032e21f4(local_78);
    uVar16 = (ulong)*(ushort *)(lVar5 + 8);
    if (*(ushort *)(lVar5 + 8) != 0) {
      if ((*(char *)((long)local_70[0] + 1) < '\0') &&
         (plVar6 = (long *)FUN_032e2008(local_70[0],0x8000), plVar6 != (long *)0x0)) {
        puVar14 = (undefined8 *)*plVar6;
      }
      else {
        puVar14 = (undefined8 *)0x0;
      }
      puVar12 = (undefined8 *)(lVar5 + 0x18);
      do {
        puVar14 = puVar14 + 2;
        if (*(char *)*puVar12 == 't') {
          uVar4 = FUN_033767d0(param_1,puVar12[-1],param_4);
          *puVar14 = uVar4;
        }
        uVar16 = uVar16 - 1;
        puVar12 = puVar12 + 2;
      } while (uVar16 != 0);
    }
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    plVar6 = (long *)FUN_032e2008(local_78,0x4000);
    puVar10 = (ulong *)*plVar6;
    uVar16 = *puVar10;
    iVar15 = (int)uVar16;
    if ((iVar15 != 0) && (plVar6 = (long *)FUN_032e2008(local_70[0],0x4000), 0 < iVar15)) {
      uVar16 = uVar16 & 0xffffffff;
      puVar10 = puVar10 + 1;
      puVar14 = (undefined8 *)(*plVar6 + 8);
      do {
        uVar4 = FUN_033767d0(param_1,*puVar10,param_4);
        uVar16 = uVar16 - 1;
        *puVar14 = uVar4;
        puVar10 = puVar10 + 2;
        puVar14 = puVar14 + 2;
      } while (uVar16 != 0);
    }
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    puVar14 = (undefined8 *)FUN_032e2050(local_78,0x800000);
    if (puVar14 == (undefined8 *)0x0) {
      psVar17 = (short *)0x0;
    }
    else {
      psVar17 = (short *)*puVar14;
    }
    lVar5 = param_1 + 0x58;
    lVar7 = FUN_032e374c(0,(long)*psVar17,(long)psVar17[1],lVar5);
    sVar13 = psVar17[2];
    if (sVar13 < 1) {
      local_36c = 0;
      cVar1 = *(char *)(param_1 + 4);
    }
    else {
      lVar18 = 0;
      local_36c = 0;
      do {
        local_340 = *(long *)(psVar17 + lVar18 * 4 + 4);
        lVar8 = FUN_032e2c18(&local_340);
        if (lVar8 != 0) {
          uVar4 = FUN_033767d0(param_1,*(undefined8 *)(local_340 + 8),param_4);
          uVar9 = FUN_032e2c18(&local_340);
          uVar9 = FUN_032c4990(uVar9,lVar5);
          FUN_032d8ac8(&local_2a8);
          FUN_032d8f70(&local_2a8,param_1);
          FUN_032d8f98(&local_2a8,uVar4);
          if ((((*(char *)(param_1 + 4) == '\0') && ((*(byte *)(local_340 + 2) >> 4 & 1) != 0)) &&
              (puVar10 = (ulong *)FUN_032e2008(local_340,0x100000), puVar10 != (ulong *)0x0)) &&
             (*puVar10 != 0)) {
            local_238 = local_238 | 0x100000;
            local_190 = *puVar10 & 0xf0000000;
          }
          uVar3 = FUN_032e3f8c(&local_340);
          if (*(char *)(param_1 + 4) != '\0') {
            uVar16 = FUN_032e3f8c(&local_340);
            if ((uVar16 & 1) == 0) {
              local_36c = local_36c + 1;
              uVar3 = uVar3 & 0xffffffcf | 0x20;
            }
            else {
              uVar3 = uVar3 & 0xffffffcf | 0x10;
            }
          }
          FUN_032da0a0(&local_2a8,uVar9,0,uVar3);
          local_238 = local_238 | 0x40000;
          local_1a0 = local_70[0];
          uVar4 = FUN_032d9ed4(&local_2a8,lVar5);
          *(undefined8 *)(lVar7 + 8 + lVar18 * 8) = uVar4;
          FUN_032d8c08(&local_2a8);
        }
        sVar13 = psVar17[2];
        lVar18 = lVar18 + 1;
      } while (lVar18 < sVar13);
      cVar1 = *(char *)(param_1 + 4);
    }
    if (cVar1 != '\0') {
      sVar2 = *(short *)(lVar7 + 4);
      if (0 < (long)sVar2) {
        uVar16 = 0;
        lVar5 = lVar7;
        do {
          lVar18 = *(long *)(lVar7 + uVar16 * 8 + 8);
          local_2a8 = lVar18;
          if (uVar16 == 0) {
            iVar15 = 0;
          }
          else {
            lVar19 = 0;
            lVar8 = 0;
            do {
              uVar11 = FUN_033778a4(&local_2a8,lVar5 + lVar19);
              if ((uVar11 & 1) == 0) break;
              puVar14 = (undefined8 *)(lVar5 + lVar8 * 8);
              lVar8 = lVar8 + -1;
              puVar14[1] = *puVar14;
              lVar19 = lVar19 + -8;
            } while (0 < (long)(uVar16 + lVar8));
            iVar15 = (int)uVar16 + (int)lVar8;
          }
          uVar16 = uVar16 + 1;
          lVar5 = lVar5 + 8;
          *(long *)(lVar7 + (long)iVar15 * 8 + 8) = lVar18;
        } while (uVar16 != ((long)sVar2 & 0xffffffffU));
        sVar13 = psVar17[2];
      }
      FUN_032e37e0(lVar7,local_36c,sVar13 - local_36c);
    }
    plVar6 = (long *)FUN_032e1fa4(local_70[0],0x800000);
    *plVar6 = lVar7;
  }
  uVar3 = (uint)*local_70[0];
  if ((uVar3 >> 1 & 1) != 0) {
    puVar12 = (undefined8 *)FUN_032e2008(local_70[0],2);
    puVar14 = local_70[0];
    if (puVar12 == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar12;
    }
    uVar4 = FUN_033767d0(param_1,uVar4,param_4);
    puVar14 = (undefined8 *)FUN_032e1fa4(puVar14,2);
    *puVar14 = uVar4;
    uVar3 = (uint)*local_70[0];
  }
  puVar14 = local_70[0];
  if (((uVar3 >> 0x14 & 1) != 0) && (lVar5 = FUN_032e2008(local_70[0],0x100000), lVar5 != 0)) {
    FUN_032dd4b8(puVar14);
    ppbStack_2a0 = &local_78;
    local_298 = local_70;
    local_2a8 = param_1;
    FUN_033776f4(&local_2a8);
    puVar14 = local_70[0];
  }
  if (((*(byte *)((long)puVar14 + 3) >> 1 & 1) != 0) &&
     (lVar5 = FUN_032e2008(puVar14,0x2000000), lVar5 != 0)) {
    FUN_032c4d3c(&local_2a8);
    if (((local_78[3] >> 1 & 1) != 0) &&
       ((plVar6 = (long *)FUN_032e2008(local_78,0x2000000), plVar6 != (long *)0x0 && (*plVar6 != 0))
       )) {
      FUN_032c4d7c(&local_2a8,*plVar6,0xffffffff);
    }
    if (*(char *)(param_1 + 7) != '\0') {
      FUN_032dc3a0(&local_340,local_78,&DAT_04358310);
      lVar5 = local_340;
      if ((local_330 & 1) != 0) {
        FUN_032e0c40(local_330 & 0xfffffffffffffffe);
      }
      if (lVar5 != 0) {
        FUN_032c4d3c(&local_340);
        local_348 = 0;
        local_358 = FUN_032e0ab0(lVar5,&DAT_04358310);
        if (local_358._8_8_ == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = FUN_032e3508(local_358._8_8_);
          if ((uVar16 & 1) != 0) {
            FUN_032e0c28(uVar16 & 0xfffffffffffffffe);
          }
        }
        if ((local_348 & 1) != 0) {
          uVar11 = local_348 & 0xfffffffffffffffe;
          local_348 = uVar16;
          FUN_032e0c40(uVar11);
          uVar16 = local_348;
        }
        local_348 = uVar16;
        local_368 = &DAT_03996322;
        puStack_360 = &DAT_03996322;
        FUN_032d8240(local_358,&local_340,&local_368);
        if ((local_348 & 1) != 0) {
          FUN_032e0c40(local_348 & 0xfffffffffffffffe);
        }
        FUN_032c5d4c(&local_2a8,local_340,local_338 + -1);
        FUN_032c4ce8(&local_340);
      }
    }
    puVar14 = local_70[0];
    uVar4 = FUN_032c4990(local_2a8,param_1 + 0x58);
    puVar14 = (undefined8 *)FUN_032e1fa4(puVar14,0x2000000);
    *puVar14 = uVar4;
    FUN_032c4ce8(&local_2a8);
  }
  return;
}


