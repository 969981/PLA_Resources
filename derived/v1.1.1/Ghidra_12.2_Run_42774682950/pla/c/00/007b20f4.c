/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b20f4; name: FUN_007b20f4
 */


void FUN_007b20f4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  puVar2 = PTR_DAT_043730c0;
  uVar1 = *(uint *)(param_1 + 8);
  uVar7 = (ulong)uVar1;
  if ((int)uVar1 < 0) {
    FUN_0030f640(auStack_60,3,"external/com_google_protobuf/src\\google/protobuf/repeated_field.h",
                 0x6e8);
                    /* try { // try from 007b21dc to 007b21ef has its CatchHandler @ 007b2218 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: (n) >= (0): ");
                    /* try { // try from 007b21f0 to 007b21f7 has its CatchHandler @ 007b2214 */
    FUN_0030f41c(auStack_68,uVar3);
    FUN_0030f658(auStack_60);
  }
  else if (uVar1 != 0) {
    plVar8 = (long *)(*(long *)(param_1 + 0x10) + 8);
    lVar6 = *plVar8;
    pbVar4 = *(byte **)(lVar6 + 0x10);
    if (pbVar4 != PTR_DAT_043730c0) goto LAB_007b2158;
LAB_007b2164:
    do {
      FUN_007ae44c(lVar6);
      uVar5 = *(ulong *)(lVar6 + 8);
      while( true ) {
        if ((uVar5 & 1) != 0) {
          uVar5 = uVar5 & 0xfffffffffffffffe;
          if ((*(byte *)(uVar5 + 8) & 1) == 0) {
            *(undefined2 *)(uVar5 + 8) = 0;
          }
          else {
            **(undefined1 **)(uVar5 + 0x18) = 0;
            *(undefined8 *)(uVar5 + 0x10) = 0;
          }
        }
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) {
          *(undefined4 *)(param_1 + 8) = 0;
          return;
        }
        plVar8 = plVar8 + 1;
        lVar6 = *plVar8;
        pbVar4 = *(byte **)(lVar6 + 0x10);
        if (pbVar4 == puVar2) goto LAB_007b2164;
LAB_007b2158:
        if ((*pbVar4 & 1) == 0) break;
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        FUN_007ae44c(lVar6);
        uVar5 = *(ulong *)(lVar6 + 8);
      }
      pbVar4[0] = 0;
      pbVar4[1] = 0;
    } while( true );
  }
  return;
}


