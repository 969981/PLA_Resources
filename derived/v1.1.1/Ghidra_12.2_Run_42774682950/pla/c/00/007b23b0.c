/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b23b0; name: FUN_007b23b0
 */


void FUN_007b23b0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  puVar2 = PTR_DAT_043730c0;
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulong)uVar1;
  if ((int)uVar1 < 0) {
    FUN_0030f640(auStack_40,3,"external/com_google_protobuf/src\\google/protobuf/repeated_field.h",
                 0x6e8);
                    /* try { // try from 007b24b0 to 007b24c3 has its CatchHandler @ 007b24e4 */
    uVar3 = FUN_0030f3ac(auStack_40,"CHECK failed: (n) >= (0): ");
                    /* try { // try from 007b24c4 to 007b24cb has its CatchHandler @ 007b24e0 */
    FUN_0030f41c(auStack_48,uVar3);
    FUN_0030f658(auStack_40);
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  plVar5 = (long *)(*(long *)(param_1 + 0x10) + 8);
  lVar6 = *plVar5;
  pbVar8 = *(byte **)(lVar6 + 0x10);
  if (pbVar8 != PTR_DAT_043730c0) goto LAB_007b2404;
LAB_007b2410:
  pbVar8 = *(byte **)(lVar6 + 0x18);
  if (pbVar8 == puVar2) goto LAB_007b245c;
  do {
    if ((*pbVar8 & 1) != 0) {
      **(undefined1 **)(pbVar8 + 0x10) = 0;
      pbVar8[8] = 0;
      pbVar8[9] = 0;
      pbVar8[10] = 0;
      pbVar8[0xb] = 0;
      pbVar8[0xc] = 0;
      pbVar8[0xd] = 0;
      pbVar8[0xe] = 0;
      pbVar8[0xf] = 0;
      goto LAB_007b245c;
    }
    pbVar8[0] = 0;
    pbVar8[1] = 0;
    uVar7 = *(ulong *)(lVar6 + 8);
    while( true ) {
      if ((uVar7 & 1) != 0) {
        uVar7 = uVar7 & 0xfffffffffffffffe;
        if ((*(byte *)(uVar7 + 8) & 1) == 0) {
          *(undefined2 *)(uVar7 + 8) = 0;
        }
        else {
          **(undefined1 **)(uVar7 + 0x18) = 0;
          *(undefined8 *)(uVar7 + 0x10) = 0;
        }
      }
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        return;
      }
      plVar5 = plVar5 + 1;
      lVar6 = *plVar5;
      pbVar8 = *(byte **)(lVar6 + 0x10);
      if (pbVar8 == puVar2) goto LAB_007b2410;
LAB_007b2404:
      if ((*pbVar8 & 1) == 0) {
        pbVar8[0] = 0;
        pbVar8[1] = 0;
        goto LAB_007b2410;
      }
      **(undefined1 **)(pbVar8 + 0x10) = 0;
      pbVar8[8] = 0;
      pbVar8[9] = 0;
      pbVar8[10] = 0;
      pbVar8[0xb] = 0;
      pbVar8[0xc] = 0;
      pbVar8[0xd] = 0;
      pbVar8[0xe] = 0;
      pbVar8[0xf] = 0;
      pbVar8 = *(byte **)(lVar6 + 0x18);
      if (pbVar8 != puVar2) break;
LAB_007b245c:
      uVar7 = *(ulong *)(lVar6 + 8);
    }
  } while( true );
}


