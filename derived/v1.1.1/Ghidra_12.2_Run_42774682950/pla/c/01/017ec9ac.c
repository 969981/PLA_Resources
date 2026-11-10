/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017ec9ac; name: FUN_017ec9ac
 */


void FUN_017ec9ac(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  char local_220 [8];
  char acStack_218 [8];
  char local_210 [8];
  char acStack_208 [8];
  char local_200 [8];
  char local_1f8 [8];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long lStack_118;
  undefined1 *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 auStack_f0 [96];
  undefined4 uStack_90;
  undefined3 uStack_8c;
  undefined8 local_89;
  undefined8 local_81;
  undefined8 local_79;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined1 auStack_48 [8];
  
  FUN_017ecc84(&local_50,*(undefined8 *)(param_2 + 8));
  lVar11 = *(long *)(DAT_043d11b0 + 8);
  uVar7 = FUN_0094cba4(lVar11 + 8);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0x6e69614d;
  uStack_68 = 0;
  if ((uVar7 & 1) == 0) {
    lVar11 = 0;
  }
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_210[0] = s_bin_haxe_release_field_field_pla_03945c7a[0x10];
  local_210[1] = s_bin_haxe_release_field_field_pla_03945c7a[0x11];
  local_210[2] = s_bin_haxe_release_field_field_pla_03945c7a[0x12];
  local_210[3] = s_bin_haxe_release_field_field_pla_03945c7a[0x13];
  local_210[4] = s_bin_haxe_release_field_field_pla_03945c7a[0x14];
  local_210[5] = s_bin_haxe_release_field_field_pla_03945c7a[0x15];
  local_210[6] = s_bin_haxe_release_field_field_pla_03945c7a[0x16];
  local_210[7] = s_bin_haxe_release_field_field_pla_03945c7a[0x17];
  acStack_208[0] = s_bin_haxe_release_field_field_pla_03945c7a[0x18];
  acStack_208[1] = s_bin_haxe_release_field_field_pla_03945c7a[0x19];
  acStack_208[2] = s_bin_haxe_release_field_field_pla_03945c7a[0x1a];
  acStack_208[3] = s_bin_haxe_release_field_field_pla_03945c7a[0x1b];
  acStack_208[4] = s_bin_haxe_release_field_field_pla_03945c7a[0x1c];
  acStack_208[5] = s_bin_haxe_release_field_field_pla_03945c7a[0x1d];
  acStack_208[6] = s_bin_haxe_release_field_field_pla_03945c7a[0x1e];
  acStack_208[7] = s_bin_haxe_release_field_field_pla_03945c7a[0x1f];
  local_200[0] = s_bin_haxe_release_field_field_pla_03945c7a[0x20];
  local_200[1] = s_bin_haxe_release_field_field_pla_03945c7a[0x21];
  local_200[2] = s_bin_haxe_release_field_field_pla_03945c7a[0x22];
  local_200[3] = s_bin_haxe_release_field_field_pla_03945c7a[0x23];
  local_200[4] = s_bin_haxe_release_field_field_pla_03945c7a[0x24];
  local_200[5] = s_bin_haxe_release_field_field_pla_03945c7a[0x25];
  local_200[6] = s_bin_haxe_release_field_field_pla_03945c7a[0x26];
  local_200[7] = s_bin_haxe_release_field_field_pla_03945c7a[0x27];
  local_1f8[0] = s_bin_haxe_release_field_field_pla_03945c7a[0x28];
  local_1f8[1] = s_bin_haxe_release_field_field_pla_03945c7a[0x29];
  local_1f8[2] = s_bin_haxe_release_field_field_pla_03945c7a[0x2a];
  local_1f8[3] = s_bin_haxe_release_field_field_pla_03945c7a[0x2b];
  local_1f8[4] = s_bin_haxe_release_field_field_pla_03945c7a[0x2c];
  local_1f8[5] = s_bin_haxe_release_field_field_pla_03945c7a[0x2d];
  local_1f8[6] = s_bin_haxe_release_field_field_pla_03945c7a[0x2e];
  local_1f8[7] = s_bin_haxe_release_field_field_pla_03945c7a[0x2f];
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_220[0] = s_bin_haxe_release_field_field_pla_03945c7a[0];
  local_220[1] = s_bin_haxe_release_field_field_pla_03945c7a[1];
  local_220[2] = s_bin_haxe_release_field_field_pla_03945c7a[2];
  local_220[3] = s_bin_haxe_release_field_field_pla_03945c7a[3];
  local_220[4] = s_bin_haxe_release_field_field_pla_03945c7a[4];
  local_220[5] = s_bin_haxe_release_field_field_pla_03945c7a[5];
  local_220[6] = s_bin_haxe_release_field_field_pla_03945c7a[6];
  local_220[7] = s_bin_haxe_release_field_field_pla_03945c7a[7];
  acStack_218[0] = s_bin_haxe_release_field_field_pla_03945c7a[8];
  acStack_218[1] = s_bin_haxe_release_field_field_pla_03945c7a[9];
  acStack_218[2] = s_bin_haxe_release_field_field_pla_03945c7a[10];
  acStack_218[3] = s_bin_haxe_release_field_field_pla_03945c7a[0xb];
  acStack_218[4] = s_bin_haxe_release_field_field_pla_03945c7a[0xc];
  acStack_218[5] = s_bin_haxe_release_field_field_pla_03945c7a[0xd];
  acStack_218[6] = s_bin_haxe_release_field_field_pla_03945c7a[0xe];
  acStack_218[7] = s_bin_haxe_release_field_field_pla_03945c7a[0xf];
  local_120 = *(undefined8 *)(param_2 + 8);
  local_71 = 0;
  local_110 = &LAB_017ed76c;
  local_108 = FUN_017ed774;
  local_100 = &LAB_017ed7a4;
  puStack_f8 = &LAB_017ed7a8;
  local_79 = 0;
  local_89 = 0;
  local_81 = 0;
  uStack_8c = 0x7265;
  uStack_90 = 0x79616c70;
  lStack_118 = lVar11;
  plVar8 = (long *)FUN_017ed7ac(auStack_48,local_120,local_220);
  *param_1 = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_017ecc34;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*plVar8 + 0x40))(plVar8);
  plVar6 = local_50;
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_017ecc34:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)plVar6[0xd];
  plVar6[0xd] = (long)plVar8;
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  *(undefined1 *)((long)local_50 + 0x74) = 0;
  FUN_017eccfc(param_2 + 0x58,&local_50);
  pcVar5 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (undefined1 *)0x0;
    puStack_f8 = (undefined1 *)0x0;
    local_110 = (undefined1 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar5)(auStack_f0);
  }
  if (local_50 != (long *)0x0) {
    lVar11 = local_50[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))(local_50);
    }
  }
  return;
}


