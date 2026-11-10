/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bf4b0; name: FUN_031bf4b0
 */


void FUN_031bf4b0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x20) + 0x18) +
           (param_2 & 0x3fffff) * 0x18);
  uVar2 = *(undefined8 *)((long)puVar1 + 6);
  puVar3 = (undefined8 *)(param_1 + 0x90);
  *puVar3 = *puVar1;
  *(undefined8 *)(param_1 + 0x96) = uVar2;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)((long)puVar1 + 0x14);
  FUN_03159b7c(*(long *)(param_1 + 0x58),puVar3,param_1 + 0x110);
  if (**(int **)(param_1 + 0x40) == (int)param_2) {
    uVar7 = (*(undefined8 **)(param_1 + 0x38))[1];
    uVar2 = **(undefined8 **)(param_1 + 0x38);
  }
  else {
    uVar2 = CONCAT44(((float)((ulong)*(undefined8 *)(param_1 + 0x110) >> 0x20) +
                     *(float *)(param_1 + 0x124)) * 0.5,
                     ((float)*(undefined8 *)(param_1 + 0x110) + *(float *)(param_1 + 0x120)) * 0.5);
    uVar7 = CONCAT44(((float)((ulong)*(undefined8 *)(param_1 + 0x118) >> 0x20) +
                     *(float *)(param_1 + 300)) * 0.5,
                     ((float)*(undefined8 *)(param_1 + 0x118) + *(float *)(param_1 + 0x128)) * 0.5);
  }
  *(int *)(param_1 + 0xf0) = (int)param_2;
  *(undefined8 **)(param_1 + 0xf8) = puVar3;
  *(undefined8 *)(param_1 + 0x108) = uVar7;
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  if (*(long *)(param_1 + 0x140) == 0) {
    auVar10 = NEON_fmin(*(undefined1 (*) [16])(param_1 + 0xe0),
                        *(undefined1 (*) [16])(param_1 + 0x120),4);
    auVar9 = NEON_fmax(*(undefined1 (*) [16])(param_1 + 0xd0),
                       *(undefined1 (*) [16])(param_1 + 0x110),4);
    uVar4 = 0xff7fffee;
    uVar5 = 0xff7fffee;
    uVar6 = 0xff7fffee;
    uVar8 = 0xff7fffee;
    auVar11 = NEON_fmin(auVar9,auVar10,4);
    auVar9 = NEON_fmax(auVar9,auVar10,4);
    *(long *)(param_1 + 0x168) = auVar11._8_8_;
    *(long *)(param_1 + 0x160) = auVar11._0_8_;
    *(long *)(param_1 + 0x178) = auVar9._8_8_;
    *(long *)(param_1 + 0x170) = auVar9._0_8_;
    uStack_38 = 0x7f7fffee;
    local_40 = 0x7f7fffee;
    uStack_3c = 0x7f7fffee;
    uStack_34 = 0x7f7fffee;
  }
  else {
    FUN_031bff48(*(undefined8 *)(param_1 + 0x58),*(long *)(param_1 + 0x140),&local_40);
    uVar4 = local_40;
    uVar5 = uStack_3c;
    uVar6 = uStack_38;
    uVar8 = uStack_34;
  }
  *(undefined4 *)(param_1 + 0x188) = uStack_38;
  *(undefined4 *)(param_1 + 0x18c) = uStack_34;
  *(undefined4 *)(param_1 + 0x180) = local_40;
  *(undefined4 *)(param_1 + 0x184) = uStack_3c;
  *(undefined4 *)(param_1 + 0x198) = uVar6;
  *(undefined4 *)(param_1 + 0x19c) = uVar8;
  *(undefined4 *)(param_1 + 400) = uVar4;
  *(undefined4 *)(param_1 + 0x194) = uVar5;
  return;
}


