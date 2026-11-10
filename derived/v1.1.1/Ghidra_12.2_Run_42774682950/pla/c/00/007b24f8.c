/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b24f8; name: FUN_007b24f8
 */


void FUN_007b24f8(long param_1)

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
                    /* try { // try from 007b25f8 to 007b260b has its CatchHandler @ 007b2634 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: (n) >= (0): ");
                    /* try { // try from 007b260c to 007b2613 has its CatchHandler @ 007b2630 */
    FUN_0030f41c(auStack_68,uVar3);
    FUN_0030f658(auStack_60);
  }
  else if (uVar1 != 0) {
    plVar7 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      while( true ) {
        lVar8 = *plVar7;
        FUN_007b20f4(lVar8 + 0x10);
        pbVar4 = *(byte **)(lVar8 + 0x28);
        if (pbVar4 != puVar2) break;
LAB_007b2560:
        pbVar4 = *(byte **)(lVar8 + 0x30);
        if (pbVar4 == puVar2) goto LAB_007b25ac;
LAB_007b256c:
        if ((*pbVar4 & 1) != 0) {
          **(undefined1 **)(pbVar4 + 0x10) = 0;
          pbVar4[8] = 0;
          pbVar4[9] = 0;
          pbVar4[10] = 0;
          pbVar4[0xb] = 0;
          pbVar4[0xc] = 0;
          pbVar4[0xd] = 0;
          pbVar4[0xe] = 0;
          pbVar4[0xf] = 0;
          goto LAB_007b25ac;
        }
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        uVar5 = *(ulong *)(lVar8 + 8);
        if ((uVar5 & 1) != 0) goto LAB_007b25b4;
LAB_007b2530:
        plVar7 = plVar7 + 1;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_007b25d8;
      }
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        goto LAB_007b2560;
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
      pbVar4 = *(byte **)(lVar8 + 0x30);
      if (pbVar4 != puVar2) goto LAB_007b256c;
LAB_007b25ac:
      uVar5 = *(ulong *)(lVar8 + 8);
      if ((uVar5 & 1) == 0) goto LAB_007b2530;
LAB_007b25b4:
      uVar5 = uVar5 & 0xfffffffffffffffe;
      if ((*(byte *)(uVar5 + 8) & 1) == 0) {
        *(undefined2 *)(uVar5 + 8) = 0;
        goto LAB_007b2530;
      }
      **(undefined1 **)(uVar5 + 0x18) = 0;
      *(undefined8 *)(uVar5 + 0x10) = 0;
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
LAB_007b25d8:
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


