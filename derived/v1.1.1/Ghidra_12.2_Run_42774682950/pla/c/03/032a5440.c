/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a5440; name: FUN_032a5440
 */


void FUN_032a5440(undefined8 *param_1,long *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  uint *puVar5;
  undefined1 auVar6 [16];
  
  if ((((*(char *)((long)param_1 + 0xd) == '\x01') || (*(char *)((long)param_2 + 0xd) == '\x04')) &&
      (*(char *)((long)param_1 + 0xc) == '\b')) &&
     ((0 < param_3 && (*(char *)((long)param_2 + 0xc) == '\n')))) {
    uVar1 = (int)param_2[1] >> 2;
    iVar2 = *(int *)(param_1 + 1);
    pfVar4 = (float *)*param_2;
    puVar5 = (uint *)*param_1;
    do {
      uVar3 = *puVar5;
      puVar5 = (uint *)((long)puVar5 +
                       (-(ulong)((uint)(iVar2 >> 2) >> 0x1f) & 0xfffffffc00000000 |
                       (ulong)(uint)(iVar2 >> 2) << 2));
      auVar6._0_8_ = CONCAT44(uVar3 >> 8,uVar3) & 0xff000000ff;
      auVar6._8_4_ = uVar3 >> 0x10 & 0xff;
      param_3 = param_3 + -1;
      auVar6._12_4_ = uVar3 >> 0x18;
      auVar6 = NEON_scvtf(auVar6,4);
      pfVar4[2] = auVar6._8_4_ * 0.003921569;
      pfVar4[3] = auVar6._12_4_ * 0.003921569;
      *pfVar4 = auVar6._0_4_ * 0.003921569;
      pfVar4[1] = auVar6._4_4_ * 0.003921569;
      pfVar4 = (float *)((long)pfVar4 +
                        (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
    } while (param_3 != 0);
  }
  return;
}


