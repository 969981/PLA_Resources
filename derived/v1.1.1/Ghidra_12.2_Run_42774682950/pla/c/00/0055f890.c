/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055f890; name: FUN_0055f890
 */


undefined8 FUN_0055f890(char *param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  undefined4 uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  
  if ((*param_2 & 1) == 0) {
    param_2[0] = 0;
    param_2[1] = 0;
  }
  else {
    **(undefined1 **)(param_2 + 0x10) = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  *param_3 = 0;
  *param_4 = 0;
  if (*param_1 == '\x05') {
    uVar1 = *(ushort *)(param_1 + 6);
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      uVar11 = 0;
      lVar12 = -8;
      do {
        pcVar8 = param_1 + 8;
        if (uVar1 != 1) {
          pcVar8 = *(char **)(param_1 + 8);
        }
        if (**(char **)(pcVar8 + uVar11 * 8) != '\x12') {
          uVar10 = (uint)uVar11;
          if (uVar10 == 0) {
            return 0;
          }
          pcVar8 = param_1 + 8;
          if (uVar1 < 2) {
            pcVar7 = pcVar8;
          }
          else {
            pcVar7 = *(char **)pcVar8;
          }
          pbVar9 = *(byte **)(pcVar7 + uVar11 * 8);
          if (1 < *pbVar9 - 3) {
            return 0;
          }
          if (uVar10 + 1 < (uint)uVar1) {
            while( true ) {
              uVar11 = uVar11 + 1;
              pcVar7 = pcVar8;
              if (1 < (uint)uVar6) {
                pcVar7 = *(char **)pcVar8;
              }
              if (uVar6 <= uVar11) break;
              FUN_0055dbac(*(undefined8 *)(pcVar7 + uVar11 * 8));
              uVar6 = (ulong)*(ushort *)(param_1 + 6);
            }
            puVar3 = (undefined2 *)
                     FUN_0055e598(5,(long)pcVar7 - lVar12,~uVar10 + (uint)uVar6,
                                  *(undefined2 *)(param_1 + 2),0);
          }
          else {
            uVar2 = *(undefined2 *)(param_1 + 2);
            puVar3 = (undefined2 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
            if (puVar3 != (undefined2 *)0x0) {
              puVar3[1] = uVar2;
              *puVar3 = 2;
              puVar3[2] = 1;
              puVar3[0x13] = 0;
              *(undefined8 *)(puVar3 + 7) = 0;
              *(undefined8 *)(puVar3 + 3) = 0;
              *(undefined8 *)(puVar3 + 0xf) = 0;
              *(undefined8 *)(puVar3 + 0xb) = 0;
            }
          }
          *param_4 = puVar3;
          if (*pbVar9 == 3) {
            pbVar4 = pbVar9 + 0x18;
            uVar5 = 1;
          }
          else {
            pbVar4 = *(byte **)(pbVar9 + 0x20);
            uVar5 = *(undefined4 *)(pbVar9 + 0x18);
          }
          FUN_0055f690(*(ushort *)(pbVar9 + 2) >> 5 & 1,pbVar4,uVar5,param_2);
          *param_3 = pbVar9[2] & 1;
          return 1;
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + -8;
      } while (uVar11 < uVar6);
    }
  }
  return 0;
}


