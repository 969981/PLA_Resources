/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276a3d4; name: FUN_0276a3d4
 */


void FUN_0276a3d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  int local_158 [2];
  long local_150 [2];
  long local_140;
  undefined6 local_138;
  undefined2 uStack_132;
  undefined6 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined6 uStack_110;
  undefined2 local_10a;
  undefined6 uStack_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  char local_d4 [48];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  plVar9 = (long *)(param_1 + 0x50);
  pcVar8 = (code *)*plVar9;
  if (pcVar8 != (code *)0x0) {
    uStack_88 = *(undefined8 *)(param_1 + 8);
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_80 = 0x1af286bca1af286;
    uStack_78 = 0;
    local_70 = 0;
    lVar2 = *(long *)(param_2 + 8);
    lVar3 = *(long *)(param_2 + 0x10);
    if (lVar2 != lVar3) {
      lVar10 = 0;
      do {
        lVar1 = lVar2 + lVar10;
        pcVar5 = (char *)FUN_02765bac(lVar1 + 0x98,&DAT_03a7e014);
        if (*pcVar5 == '\x01') {
          local_100 = 0;
          local_fc = 0;
          local_e8 = 0;
          local_e0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_dc = 0;
          local_d8 = 0;
          local_138 = 0;
          uStack_132 = 0;
          uStack_130 = 0;
          uStack_108 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_10a = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_a4 = 0;
          local_d4[0x20] = '\0';
          local_d4[0x21] = '\0';
          local_d4[0x22] = '\0';
          local_d4[0x23] = '\0';
          local_d4[0x24] = '\0';
          local_d4[0x25] = '\0';
          local_d4[0x26] = '\0';
          local_d4[0x27] = '\0';
          local_d4[0x28] = '\0';
          local_d4[0x29] = '\0';
          local_d4[0x2a] = '\0';
          local_d4[0x2b] = '\0';
          local_d4[0x2c] = '\0';
          local_d4[0x2d] = '\0';
          local_d4[0x2e] = '\0';
          local_d4[0x2f] = '\0';
          local_d4[0x10] = '\0';
          local_d4[0x11] = '\0';
          local_d4[0x12] = '\0';
          local_d4[0x13] = '\0';
          local_d4[0x14] = '\0';
          local_d4[0x15] = '\0';
          local_d4[0x16] = '\0';
          local_d4[0x17] = '\0';
          local_d4[0x18] = '\0';
          local_d4[0x19] = '\0';
          local_d4[0x1a] = '\0';
          local_d4[0x1b] = '\0';
          local_d4[0x1c] = '\0';
          local_d4[0x1d] = '\0';
          local_d4[0x1e] = '\0';
          local_d4[0x1f] = '\0';
          local_d4[0] = '\0';
          local_d4[1] = '\0';
          local_d4[2] = '\0';
          local_d4[3] = '\0';
          local_d4[4] = '\0';
          local_d4[5] = '\0';
          local_d4[6] = '\0';
          local_d4[7] = '\0';
          local_d4[8] = '\0';
          local_d4[9] = '\0';
          local_d4[10] = '\0';
          local_d4[0xb] = '\0';
          local_d4[0xc] = '\0';
          local_d4[0xd] = '\0';
          local_d4[0xe] = '\0';
          local_d4[0xf] = '\0';
          if ((*(byte *)(lVar1 + 0x78) & 1) == 0) {
            lVar7 = lVar1 + 0x79;
            uVar6 = (ulong)(*(byte *)(lVar1 + 0x78) >> 1);
          }
          else {
            uVar6 = *(ulong *)(lVar1 + 0x80);
            lVar7 = *(long *)(lVar1 + 0x88);
          }
          FUN_02daaf80(local_150,lVar7,uVar6);
          pcVar5 = (char *)(local_150[0] + local_140);
          local_140 = local_140 + 1;
          if ((*pcVar5 == -0x47) &&
             (FUN_02765c5c(local_158,&local_138,local_150), local_158[0] == 0)) {
            if ((*(byte *)(lVar1 + 8) & 1) == 0) {
              lVar7 = lVar1 + 9;
            }
            else {
              lVar7 = *(long *)(lVar1 + 0x18);
            }
            snprintf(local_d4,0x18,"%s",lVar7);
            if ((*(byte *)(lVar1 + 0xb8) & 1) == 0) {
              lVar7 = lVar1 + 0xb9;
            }
            else {
              lVar7 = *(long *)(lVar1 + 200);
            }
            snprintf(local_d4 + 0x18,0x18,"%s",lVar7);
            puVar4 = (undefined4 *)FUN_02765bac(lVar1 + 0x98,&DAT_03a7e018);
            local_a4 = *puVar4;
            FUN_02765bf8(&local_a0,&local_138);
          }
        }
        lVar10 = lVar10 + 0xe8;
      } while (lVar3 - lVar2 != lVar10);
      pcVar8 = (code *)*plVar9;
    }
    (*pcVar8)(param_1 + 0x70,&local_a0);
    pcVar8 = *(code **)(param_1 + 0x58);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *plVar9 = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      (*pcVar8)(param_1 + 0x70);
    }
    FUN_02766bdc(&local_a0);
  }
  return;
}


