/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006308d8; name: FUN_006308d8
 */


void FUN_006308d8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  puVar2 = PTR_DAT_043730c0;
  uVar1 = *(uint *)(param_1 + 8);
  uVar6 = (ulong)uVar1;
  if ((int)uVar1 < 0) {
    FUN_0030f640(auStack_60,3,"external/com_google_protobuf/src\\google/protobuf/repeated_field.h",
                 0x6e8);
                    /* try { // try from 006309a8 to 006309bb has its CatchHandler @ 006309e4 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: (n) >= (0): ");
                    /* try { // try from 006309bc to 006309c3 has its CatchHandler @ 006309e0 */
    FUN_0030f41c(auStack_68,uVar3);
    FUN_0030f658(auStack_60);
  }
  else if (uVar1 != 0) {
    plVar7 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      while( true ) {
        lVar8 = *plVar7;
        FUN_00630c28(lVar8 + 0x10);
        pbVar4 = *(byte **)(lVar8 + 0x28);
        if (pbVar4 == puVar2) break;
        if ((*pbVar4 & 1) == 0) {
          pbVar4[0] = 0;
          pbVar4[1] = 0;
          break;
        }
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        uVar5 = *(ulong *)(lVar8 + 8);
        if ((uVar5 & 1) != 0) goto LAB_00630948;
LAB_00630910:
        plVar7 = plVar7 + 1;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_00630988;
      }
      uVar5 = *(ulong *)(lVar8 + 8);
      if ((uVar5 & 1) == 0) goto LAB_00630910;
LAB_00630948:
      uVar5 = uVar5 & 0xfffffffffffffffe;
      if ((*(byte *)(uVar5 + 8) & 1) == 0) {
        *(undefined2 *)(uVar5 + 8) = 0;
        goto LAB_00630910;
      }
      **(undefined1 **)(uVar5 + 0x18) = 0;
      *(undefined8 *)(uVar5 + 0x10) = 0;
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
LAB_00630988:
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


