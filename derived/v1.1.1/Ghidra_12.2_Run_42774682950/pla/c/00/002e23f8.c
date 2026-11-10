/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e23f8; name: FUN_002e23f8
 */


void FUN_002e23f8(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar5 = (ulong)uVar1;
  if ((int)uVar1 < 0) {
    FUN_0030f640(auStack_60,3,"external/com_google_protobuf/src\\google/protobuf/repeated_field.h",
                 0x6e8);
                    /* try { // try from 002e248c to 002e249f has its CatchHandler @ 002e24c8 */
    uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: (n) >= (0): ");
                    /* try { // try from 002e24a0 to 002e24a7 has its CatchHandler @ 002e24c4 */
    FUN_0030f41c(auStack_28,uVar2);
    FUN_0030f658(auStack_60);
  }
  else if (uVar1 != 0) {
    plVar6 = (long *)(*(long *)(param_1 + 0x10) + 8);
LAB_002e2434:
    do {
      lVar4 = *plVar6;
      FUN_002de8d8(lVar4);
      uVar3 = *(ulong *)(lVar4 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = uVar3 & 0xfffffffffffffffe;
        if ((*(byte *)(uVar3 + 8) & 1) != 0) {
          **(undefined1 **)(uVar3 + 0x18) = 0;
          *(undefined8 *)(uVar3 + 0x10) = 0;
          plVar6 = plVar6 + 1;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) break;
          goto LAB_002e2434;
        }
        *(undefined2 *)(uVar3 + 8) = 0;
      }
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


