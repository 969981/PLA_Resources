/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337d9e4; name: FUN_0337d9e4
 */


void FUN_0337d9e4(int *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  short *psVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined8 local_1c0;
  undefined8 local_1b8;
  uint *local_1b0 [42];
  uint local_54;
  
  if ((param_3 & 1) != 0) {
    return;
  }
  if (param_1[6] != param_1[0x1a]) {
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_0337db00;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(local_1b0,&DAT_044508b0,1);
      lVar4 = FUN_03326338(local_1b0,"Type bodies have not been read yet",PTR_DAT_04372528);
      uVar11 = 0x800;
LAB_0337daf4:
      *(char **)(lVar4 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar4 + 0x40) = uVar11;
      FUN_033269dc(local_1b0);
      goto LAB_0337db00;
    }
    FUN_03326a7c(local_1b0,&DAT_044508b0,1);
    lVar4 = FUN_03326338(local_1b0,"Type bodies have not been read yet",PTR_DAT_04372528);
    uVar11 = 0x800;
LAB_0337db68:
    *(char **)(lVar4 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar4 + 0x40) = uVar11;
    FUN_03326adc(local_1b0);
LAB_0337db00:
    *param_1 = -0x7ffbfe00;
    return;
  }
  uVar3 = FUN_03384ab0(param_2);
  if (uVar3 >> 0x1f == 0) {
    if (*(byte *)(param_2 + 0x18) != 0) goto LAB_0337da38;
    if (-1 < *param_1) {
      if ((int)uVar3 < 1) {
        return;
      }
      while( true ) {
        uVar5 = FUN_03384ab0(param_2);
        if (uVar5 >> 0x1f != 0) {
          *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
        }
        uVar6 = FUN_03384ab0(param_2);
        if (uVar6 >> 0x20 != 0) {
          *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
        }
        local_54 = (uint)uVar6;
        uVar7 = FUN_03384ab0(param_2);
        if (0xffff < uVar7) break;
        if (*(byte *)(param_2 + 0x18) != 0) goto LAB_0337e028;
        if (*param_1 < 0) goto LAB_0337e034;
        if (((int)uVar5 < 1) || (param_1[0x1a] <= (int)uVar5)) {
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') goto LAB_0337db00;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(local_1b0,&DAT_044508b0,1);
            lVar4 = FUN_03326338(local_1b0,"Invalid context ID (out of bounds) when reading decl",
                                 PTR_DAT_04372528);
            uVar11 = 0x80c;
            goto LAB_0337daf4;
          }
          FUN_03326a7c(local_1b0,&DAT_044508b0,1);
          lVar4 = FUN_03326338(local_1b0,"Invalid context ID (out of bounds) when reading decl",
                               PTR_DAT_04372528);
          uVar11 = 0x80c;
          goto LAB_0337db68;
        }
        local_1b8 = *(undefined8 *)
                     (*(long *)(param_1 + 4) +
                     (-(uVar5 >> 0x1f & 1) & 0xfffffff800000000 | (uVar5 & 0xffffffff) << 3));
        uVar1 = (uint)uVar7 & 0xffff;
        if (param_1[0x22] <= (int)uVar1) {
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') goto LAB_0337db00;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(local_1b0,&DAT_044508b0,1);
            lVar4 = FUN_03326338(local_1b0,"Invalid field name string ID (out of bounds)",
                                 PTR_DAT_04372528);
            uVar11 = 0x810;
            goto LAB_0337daf4;
          }
          FUN_03326a7c(local_1b0,&DAT_044508b0,1);
          lVar4 = FUN_03326338(local_1b0,"Invalid field name string ID (out of bounds)",
                               PTR_DAT_04372528);
          uVar11 = 0x810;
          goto LAB_0337db68;
        }
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 8);
        local_1c0 = uVar11;
        puVar8 = (undefined8 *)FUN_032e2050(local_1b8,0x800000);
        if ((puVar8 == (undefined8 *)0x0) || (psVar10 = (short *)*puVar8, psVar10 == (short *)0x0))
        {
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') goto LAB_0337db00;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(local_1b0,&DAT_044508b0,1);
            lVar4 = FUN_03326338(local_1b0,
                                 "Cannot add decl to \'{}\' as it does not have Opt::DECLS",
                                 PTR_DAT_043891f8,&local_1b8);
            uVar11 = 0x815;
            goto LAB_0337daf4;
          }
          FUN_03326a7c(local_1b0,&DAT_044508b0,1);
          lVar4 = FUN_03326338(local_1b0,"Cannot add decl to \'{}\' as it does not have Opt::DECLS",
                               PTR_DAT_043891f8,&local_1b8);
          uVar11 = 0x815;
          goto LAB_0337db68;
        }
        if ((uint)((int)psVar10[1] + (int)*psVar10) <= (uint)uVar6) {
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') goto LAB_0337db00;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(local_1b0,&DAT_044508b0,1);
            lVar4 = FUN_03326338(local_1b0,"Invalid decl index (out of bounds)",PTR_DAT_04372528);
            uVar11 = 0x816;
            goto LAB_0337daf4;
          }
          FUN_03326a7c(local_1b0,&DAT_044508b0,1);
          lVar4 = FUN_03326338(local_1b0,"Invalid decl index (out of bounds)",PTR_DAT_04372528);
          uVar11 = 0x816;
          goto LAB_0337db68;
        }
        puVar12 = *(uint **)((long)psVar10 + ((long)(uVar6 << 0x20) >> 0x1d) + 8);
        local_1b0[0] = puVar12;
        pcVar9 = (char *)FUN_032e2c18(local_1b0);
        if (*pcVar9 != '$') {
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') goto LAB_0337db00;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(local_1b0,&DAT_044508b0,1);
            lVar4 = FUN_03326338(local_1b0,"Decl {} of \'{}\' (\'{}\') has already been read",
                                 &DAT_0436ec28,&local_54,&local_1b8,&local_1c0);
            uVar11 = 0x819;
            goto LAB_0337daf4;
          }
          FUN_03326a7c(local_1b0,&DAT_044508b0,1);
          lVar4 = FUN_03326338(local_1b0,"Decl {} of \'{}\' (\'{}\') has already been read",
                               &DAT_0436ec28,&local_54,&local_1b8,&local_1c0);
          uVar11 = 0x819;
          goto LAB_0337db68;
        }
        uVar1 = (*puVar12 & 0xffff) - (*puVar12 >> 1 & 0x5555);
        uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
        uVar2 = (int)uVar3 - 1;
        uVar3 = (ulong)uVar2;
        *(undefined8 *)
         (puVar12 + (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 2 + 4) =
             uVar11;
        if (uVar2 == 0) {
          return;
        }
      }
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
LAB_0337e028:
      *param_1 = -0x7ffbfe00;
LAB_0337e034:
      if (DAT_04450900 == '\0') {
        if (DAT_04350668 == '\0') {
          return;
        }
      }
      else if (DAT_04350668 == '\0') {
        FUN_03326994(local_1b0,&DAT_044508b0,1);
        lVar4 = FUN_03326338(local_1b0,"Error in input stream.",PTR_DAT_04372528);
        uVar11 = 0x809;
        goto LAB_0337da94;
      }
      FUN_03326a7c(local_1b0,&DAT_044508b0,1);
      lVar4 = FUN_03326338(local_1b0,"Error in input stream.",PTR_DAT_04372528);
      uVar11 = 0x809;
      goto LAB_0337dcf0;
    }
  }
  else {
    *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
LAB_0337da38:
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_04450900 == '\0') {
    if (DAT_04350668 == '\0') {
      return;
    }
  }
  else if (DAT_04350668 == '\0') {
    FUN_03326994(local_1b0,&DAT_044508b0,1);
    lVar4 = FUN_03326338(local_1b0,"Error in input stream.",PTR_DAT_04372528);
    uVar11 = 0x803;
LAB_0337da94:
    *(char **)(lVar4 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar4 + 0x40) = uVar11;
    FUN_033269dc(local_1b0);
    return;
  }
  FUN_03326a7c(local_1b0,&DAT_044508b0,1);
  lVar4 = FUN_03326338(local_1b0,"Error in input stream.",PTR_DAT_04372528);
  uVar11 = 0x803;
LAB_0337dcf0:
  *(char **)(lVar4 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar4 + 0x40) = uVar11;
  FUN_03326adc(local_1b0);
  return;
}


