/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005647e0; name: FUN_005647e0
 */


void FUN_005647e0(undefined8 param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [264];
  
  if (10 < param_4) {
    FUN_0054f038(auStack_170,"external/com_github_google_re2/re2/parse.cc",0x15f);
                    /* try { // try from 00564994 to 0056499f has its CatchHandler @ 005649a8 */
    FUN_00551750(auStack_168,"AddFoldedRange recurses too much.");
                    /* WARNING: Subroutine does not return */
    FUN_005503fc(auStack_170);
  }
  uVar6 = FUN_0055fb58();
  puVar5 = PTR_DAT_04374d40;
  if (((int)param_2 <= (int)param_3) && ((uVar6 & 1) != 0)) {
    uVar2 = *(uint *)PTR_DAT_04374d38;
    if (0 < (int)uVar2) {
      puVar11 = (uint *)(PTR_DAT_04374d40 + (long)(int)uVar2 * 0xc);
      do {
        puVar12 = (uint *)puVar5;
        uVar8 = uVar2;
        do {
          uVar10 = uVar8 >> 1;
          puVar9 = puVar12 + (ulong)uVar10 * 3;
          uVar7 = *puVar9;
          if ((int)uVar7 <= (int)param_2) {
            if ((int)param_2 <= (int)puVar12[(ulong)uVar10 * 3 + 1]) goto joined_r0x005648b4;
            puVar12 = puVar12 + (ulong)(uVar10 + 1) * 3;
            uVar10 = uVar8 - (uVar10 + 1);
          }
          uVar8 = uVar10;
        } while (0 < (int)uVar8);
        if (puVar11 <= puVar12) {
          return;
        }
        if (puVar12 == (uint *)0x0) {
          return;
        }
        uVar7 = *puVar12;
        puVar9 = puVar12;
joined_r0x005648b4:
        if ((int)uVar7 <= (int)param_2) {
          uVar7 = puVar9[2];
          uVar8 = puVar9[1];
          if ((int)param_3 <= (int)puVar9[1]) {
            uVar8 = param_3;
          }
          uVar10 = uVar7;
          uVar3 = uVar7;
          if (uVar7 == 0xffffffff) {
            uVar10 = (uint)((int)uVar8 % 2 == 1);
            uVar3 = (param_2 & 1) - 1;
          }
          uVar1 = ~uVar8 & 1;
          uVar4 = -(uint)((int)param_2 % 2 == 1);
          if (uVar7 != 1) {
            uVar1 = uVar10;
            uVar4 = uVar3;
          }
          FUN_005647e0(param_1,uVar4 + param_2,uVar1 + uVar8,param_4 + 1);
          uVar7 = puVar9[1] + 1;
        }
        param_2 = uVar7;
      } while ((int)uVar7 <= (int)param_3);
    }
  }
  return;
}


