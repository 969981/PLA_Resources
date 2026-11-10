/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00635328; name: FUN_00635328
 */


bool FUN_00635328(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  uVar3 = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + param_2 * 8);
  do {
    lVar2 = *(long *)(lVar2 + 0x10);
    uVar3 = uVar3 + 1;
  } while (lVar2 != 0);
  if (8 < uVar3) {
    FUN_0030f640(auStack_40,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x3a2);
                    /* try { // try from 00635368 to 0063537b has its CatchHandler @ 006353a4 */
    uVar1 = FUN_0030f3ac(auStack_40,"CHECK failed: (count) <= (kMaxLength): ");
                    /* try { // try from 0063537c to 00635383 has its CatchHandler @ 006353a0 */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
  }
  return 7 < uVar3;
}


