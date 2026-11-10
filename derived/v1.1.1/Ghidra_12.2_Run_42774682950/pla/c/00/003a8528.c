/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a8528; name: FUN_003a8528
 */


void FUN_003a8528(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = (long)(PTR_DAT_04373f08 + 0x10);
                    /* try { // try from 003a8548 to 003a8553 has its CatchHandler @ 003a86ac */
  FUN_003a86f8();
  FUN_003a2ec4(param_1 + 1);
  FUN_0032b6e4(param_1 + 0x18);
  FUN_003a83f8(param_1 + 0x15);
                    /* try { // try from 003a8568 to 003a856f has its CatchHandler @ 003a8698 */
  FUN_003c2da0(param_1 + 0x12);
  if (param_1[0x12] != 0) {
                    /* try { // try from 003a8578 to 003a857b has its CatchHandler @ 003a8678 */
    FUN_0032ce8c();
  }
                    /* try { // try from 003a8580 to 003a8587 has its CatchHandler @ 003a8694 */
  FUN_003c2628(param_1 + 0xf);
  if (param_1[0xf] != 0) {
                    /* try { // try from 003a8590 to 003a8593 has its CatchHandler @ 003a8674 */
    FUN_0032ce8c();
  }
                    /* try { // try from 003a8598 to 003a859f has its CatchHandler @ 003a8690 */
  FUN_003c2cec(param_1 + 0xc);
  if (param_1[0xc] != 0) {
                    /* try { // try from 003a85a8 to 003a85ab has its CatchHandler @ 003a8670 */
    FUN_0032ce8c();
  }
  FUN_003a38a4(param_1 + 9);
  puVar1 = PTR_LAB_04373088;
  puVar2 = (uint *)param_1[8];
  if ((puVar2 == (uint *)0x0) || (param_1[6] != 0)) {
    lVar3 = param_1[6];
    param_1[8] = 0;
  }
  else {
    uVar4 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      puVar2 = puVar2 + 2;
      lVar3 = *(long *)puVar2;
      if (lVar3 != 0) goto LAB_003a8630;
      while (uVar4 = uVar4 - 1, uVar4 != 0) {
        while( true ) {
          puVar2 = puVar2 + 2;
          lVar3 = *(long *)puVar2;
          if (lVar3 == 0) break;
LAB_003a8630:
          FUN_003a8528(lVar3);
          FUN_002e2ea0(puVar1,lVar3);
          uVar4 = uVar4 - 1;
          if (uVar4 == 0) goto LAB_003a8650;
        }
      }
LAB_003a8650:
      puVar2 = (uint *)param_1[8];
    }
    FUN_002ee710(puVar2);
    lVar3 = param_1[6];
    param_1[8] = 0;
  }
  if (lVar3 != 0) {
                    /* try { // try from 003a85d0 to 003a85d3 has its CatchHandler @ 003a866c */
    FUN_0032ce8c();
  }
                    /* try { // try from 003a85d8 to 003a85df has its CatchHandler @ 003a867c */
  FUN_003c2628(param_1 + 3);
  if (param_1[3] != 0) {
                    /* try { // try from 003a85e8 to 003a85eb has its CatchHandler @ 003a8668 */
    FUN_0032ce8c();
  }
  return;
}


