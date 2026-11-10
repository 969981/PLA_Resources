/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a0640; name: FUN_003a0640
 */


/* WARNING: Removing unreachable block (ram,0x003a07c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003a0640(undefined4 *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  uint uVar17;
  long *plVar18;
  byte *pbVar19;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  
  param_1[0xc] = *param_1;
  pbVar19 = (byte *)(param_1 + 2);
  uVar1 = (ulong)(*pbVar19 >> 1);
  lVar6 = (long)param_1 + 9;
  if ((*pbVar19 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 4);
    lVar6 = *(long *)(param_1 + 6);
  }
  FUN_00291910(param_1 + 0xe,lVar6,uVar1);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 8);
  param_1[0x16] = param_1[10];
  puVar11 = PTR_LAB_04373088;
  puVar10 = PTR_FUN_04373078;
  uVar14 = _UNK_03889cb8;
  uVar1 = _DAT_03889cb0;
  if (*(char *)(param_1 + 0x22) != '\0') {
LAB_003a0804:
    *param_1 = 1;
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      pbVar19[0] = 0;
      pbVar19[1] = 0;
    }
    else {
      **(undefined1 **)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
    }
    param_1[8] = param_1[0x23];
    param_1[9] = param_1[0x24];
    param_1[10] = param_1[0x24];
    return 0;
  }
  bVar3 = *(byte *)(param_1 + 0x1c);
  do {
    if ((bVar3 - 9 < 5) || (bVar3 == 0x20)) {
      FUN_0039f350(param_1);
    }
    else {
      iVar12 = FUN_003a0588(param_1);
      if (iVar12 == 0) {
        while (*(char *)(param_1 + 0x1c) != '\0') {
          if (*(char *)(param_1 + 0x1c) == '\n') {
            FUN_0039f350(param_1);
            break;
          }
          FUN_0039f350(param_1);
        }
        cVar4 = *(char *)(param_1 + 0x22);
      }
      else {
        if (iVar12 != 1) {
          if (iVar12 == 2) {
            return 1;
          }
          if (*(char *)(param_1 + 0x22) == '\0') {
            bVar3 = *(byte *)(param_1 + 0x1c);
            if ((bVar3 == 0) || ((byte)(bVar3 - 1) < 0x1f)) {
              local_60 = 0;
              uStack_58 = 0;
              local_50 = (char *)0x0;
              local_50 = (char *)FUN_002e2e80(puVar10,0x30);
              uVar8 = s_Invalid_control_characters_encou_03949cfa._16_8_;
              uVar7 = s_Invalid_control_characters_encou_03949cfa._0_8_;
              uStack_58 = uVar14;
              local_60 = uVar1;
              uVar15 = CONCAT17(s_Invalid_control_characters_encou_03949cfa[0x1f],
                                s_Invalid_control_characters_encou_03949cfa._24_7_);
              *(undefined8 *)(local_50 + 8) = s_Invalid_control_characters_encou_03949cfa._8_8_;
              *(undefined8 *)local_50 = uVar7;
              *(undefined8 *)(local_50 + 0x18) = uVar15;
              *(undefined8 *)(local_50 + 0x10) = uVar8;
              uVar15 = CONCAT71(s_Invalid_control_characters_encou_03949cfa._32_7_,
                                s_Invalid_control_characters_encou_03949cfa[0x1f]);
              *(undefined8 *)(local_50 + 0x27) = s_Invalid_control_characters_encou_03949cfa._39_8_;
              *(undefined8 *)(local_50 + 0x1f) = uVar15;
              local_50[0x2f] = '\0';
                    /* try { // try from 003a077c to 003a0783 has its CatchHandler @ 003a0b38 */
              (**(code **)(**(long **)(param_1 + 0x1a) + 0x10))
                        (*(long **)(param_1 + 0x1a),param_1[0x23],param_1[0x24],&local_60);
              if ((local_60 & 1) != 0) {
                FUN_002e2ea0(puVar11,local_50);
              }
              do {
                do {
                  FUN_0039f350(param_1);
                } while (*(byte *)(param_1 + 0x1c) - 1 < 0x1f);
                if (*(char *)(param_1 + 0x22) != '\0') goto LAB_003a0804;
              } while (*(byte *)(param_1 + 0x1c) == 0);
              goto LAB_003a06e4;
            }
            *param_1 = 0;
            if ((*(byte *)(param_1 + 2) & 1) == 0) {
              pbVar19[0] = 0;
              pbVar19[1] = 0;
            }
            else {
              **(undefined1 **)(param_1 + 6) = 0;
              bVar3 = *(byte *)(param_1 + 0x1c);
              *(undefined8 *)(param_1 + 4) = 0;
            }
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x23);
            uVar17 = (uint)bVar3;
            *(byte **)(param_1 + 0x26) = pbVar19;
            param_1[0x28] = param_1[0x21];
            if (((uVar17 - 0x61 < 0x1a) || (uVar17 == 0x5f)) || ((uVar17 - 0x41 & 0xff) < 0x1a))
            break;
            if (uVar17 == 0x2e) {
              FUN_0039f350(param_1);
              bVar5 = true;
              if (9 < *(byte *)(param_1 + 0x1c) - 0x30) goto LAB_003a0a54;
LAB_003a0978:
              FUN_0039f350(param_1);
              bVar16 = true;
              if (!bVar5) goto LAB_003a0a5c;
LAB_003a0988:
              if (!bVar16) {
LAB_003a0b10:
                uVar13 = 6;
                goto LAB_003a0914;
              }
              if (((param_1[0xc] == 2) && (param_1[8] == param_1[0x14])) &&
                 (param_1[9] == param_1[0x16])) {
                plVar18 = *(long **)(param_1 + 0x1a);
                uVar13 = param_1[0x23];
                iVar12 = param_1[0x24];
                local_50 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x40);
                uVar9 = s_Need_space_between_identifier_an_03967b62._32_8_;
                uVar8 = s_Need_space_between_identifier_an_03967b62._24_8_;
                uVar7 = s_Need_space_between_identifier_an_03967b62._16_8_;
                uVar15 = s_Need_space_between_identifier_an_03967b62._8_8_;
                uVar14 = s_Need_space_between_identifier_an_03967b62._0_8_;
                uStack_58 = _UNK_03889358;
                local_60 = _DAT_03889350;
                *(undefined8 *)(local_50 + 0x28) =
                     s_Need_space_between_identifier_an_03967b62._40_8_;
                *(undefined8 *)(local_50 + 0x20) = uVar9;
                *(undefined8 *)(local_50 + 8) = uVar15;
                *(undefined8 *)local_50 = uVar14;
                *(undefined8 *)(local_50 + 0x18) = uVar8;
                *(undefined8 *)(local_50 + 0x10) = uVar7;
                local_50[0x30] = '\0';
                    /* try { // try from 003a0a08 to 003a0a1b has its CatchHandler @ 003a0b28 */
                (**(code **)(*plVar18 + 0x10))(plVar18,uVar13,iVar12 + -2,&local_60);
                if ((local_60 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_50);
                }
              }
              uVar14 = 0;
              uVar15 = 1;
            }
            else {
              if (uVar17 != 0x30) {
                bVar5 = false;
                if (uVar17 - 0x30 < 10) goto LAB_003a0978;
LAB_003a0a54:
                bVar16 = false;
                if (bVar5) goto LAB_003a0988;
LAB_003a0a5c:
                if (bVar16) {
                  uVar14 = 0;
                  goto LAB_003a0a68;
                }
                cVar4 = *(char *)(param_1 + 0x1c);
                if (cVar4 == '\'') {
                  FUN_0039f350(param_1);
                  uVar14 = 0x27;
                }
                else {
                  if (cVar4 != '\"') {
                    if (cVar4 < '\0') {
                      plVar18 = *(long **)(param_1 + 0x1a);
                      uVar13 = param_1[0x23];
                      uVar2 = param_1[0x24];
                      FUN_0033b810(&local_60,"Interpreting non ascii codepoint %d.");
                    /* try { // try from 003a0adc to 003a0aef has its CatchHandler @ 003a0b18 */
                      (**(code **)(*plVar18 + 0x10))(plVar18,uVar13,uVar2,&local_60);
                      if ((local_60 & 1) != 0) {
                        FUN_002e2ea0(PTR_LAB_04373088,local_50);
                      }
                    }
                    FUN_0039f350(param_1);
                    goto LAB_003a0b10;
                  }
                  FUN_0039f350(param_1);
                  uVar14 = 0x22;
                }
                FUN_0039f488(param_1,uVar14);
                uVar13 = 5;
                goto LAB_003a0914;
              }
              FUN_0039f350(param_1);
              uVar14 = 1;
LAB_003a0a68:
              uVar15 = 0;
            }
            uVar13 = FUN_0039fa8c(param_1,uVar14,uVar15);
            goto LAB_003a0914;
          }
          goto LAB_003a0804;
        }
        FUN_0039fff0(param_1,0);
        cVar4 = *(char *)(param_1 + 0x22);
      }
      if (cVar4 != '\0') goto LAB_003a0804;
    }
LAB_003a06e4:
    bVar3 = *(byte *)(param_1 + 0x1c);
  } while( true );
  do {
    do {
      FUN_0039f350(param_1);
      bVar3 = *(byte *)(param_1 + 0x1c);
    } while ((byte)((bVar3 & 0xdf) + 0xbf) < 0x1a);
  } while ((bVar3 == 0x5f) || ((byte)(bVar3 - 0x30) < 10));
  uVar13 = 2;
LAB_003a0914:
  *param_1 = uVar13;
  iVar12 = param_1[0x28];
  if (param_1[0x21] != iVar12) {
    FUN_002e4094(*(undefined8 *)(param_1 + 0x26),*(long *)(param_1 + 0x1e) + (long)iVar12,
                 (long)(param_1[0x21] - iVar12));
  }
  param_1[0x28] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[10] = param_1[0x24];
  return 1;
}


