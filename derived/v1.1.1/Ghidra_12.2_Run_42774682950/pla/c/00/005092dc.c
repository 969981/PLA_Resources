/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005092dc; name: FUN_005092dc
 */


void FUN_005092dc(ulong *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = *param_1;
  if (uVar2 < 2) {
                    /* try { // try from 00509408 to 00509447 has its CatchHandler @ 00509448 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("!empty()","external/com_google_absl\\absl/container/inlined_vector.h",0x2a1,
                  "pop_back");
  }
  if ((uVar2 & 1) == 0) {
    puVar4 = param_1 + 1;
  }
  else {
    puVar4 = (ulong *)param_1[1];
  }
  puVar3 = *(ulong **)((long)puVar4 + (uVar2 & 0x3ffffffffffffffe) * 4 + -8);
  *(undefined8 *)((long)puVar4 + (uVar2 & 0x3ffffffffffffffe) * 4 + -8) = 0;
  puVar1 = PTR_LAB_04373088;
  if (puVar3 == (ulong *)0x0) goto LAB_005093e8;
  uVar2 = *puVar3;
  if ((uVar2 & 1) == 0) {
    puVar4 = puVar3 + 1;
joined_r0x0050934c:
    if (uVar2 >> 1 != 0) {
      uVar6 = uVar2 >> 1;
      do {
        uVar7 = uVar6 - 1;
        puVar5 = (undefined8 *)puVar4[uVar6 - 1];
        puVar4[uVar6 - 1] = 0;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5);
          FUN_002e2ea0(puVar1,puVar5);
        }
        uVar6 = uVar7;
      } while (uVar7 != 0);
    }
    memset(puVar4,0xab,(uVar2 >> 1) << 3);
    if ((*puVar3 & 1) != 0) {
      uVar2 = puVar3[1];
      goto LAB_005093c0;
    }
  }
  else {
    puVar4 = (ulong *)puVar3[1];
    if (puVar4 != (ulong *)0x0) goto joined_r0x0050934c;
    uVar2 = 0;
LAB_005093c0:
    FUN_002e2ea0(PTR_LAB_04373088,uVar2);
  }
  FUN_002e2ea0(PTR_LAB_04373088,puVar3);
  uVar2 = *param_1;
  if (uVar2 < 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("count <= GetSize()",
                  "external/com_google_absl\\absl/container/internal/inlined_vector.h",0x1a0,
                  "SubtractSize");
  }
LAB_005093e8:
  *param_1 = uVar2 - 2;
  return;
}


