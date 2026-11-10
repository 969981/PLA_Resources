/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a0178; name: FUN_007a0178
 */


void FUN_007a0178(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_68;
  long lStack_60;
  long local_50;
  long lStack_48;
  
  lStack_48 = param_1[2];
                    /* try { // try from 007a019c to 007a01a3 has its CatchHandler @ 007a0284 */
  FUN_0079bf44(&local_50,*(undefined8 *)(lStack_48 + 0x18));
  puVar1 = PTR_LAB_04373088;
  lVar2 = lStack_48;
  lVar3 = lStack_60;
  local_68 = local_50;
  while (lStack_60 = lVar2, local_68 != 0) {
    lVar3 = *(long *)(local_68 + 8);
                    /* try { // try from 007a01fc to 007a020f has its CatchHandler @ 007a0288 */
    lStack_48 = lStack_60;
    FUN_007a04dc(&local_68);
    FUN_007a028c(param_1[2],&local_50);
    if ((lVar3 != 0) && (*param_1 == 0)) {
      FUN_002e2ea0(puVar1,lVar3);
    }
    lVar2 = lStack_60;
    lVar3 = lStack_60;
  }
  if ((*param_1 == 0) && (lVar2 = param_1[2], lVar2 != 0)) {
    lStack_60 = lVar3;
                    /* try { // try from 007a0244 to 007a024b has its CatchHandler @ 007a0280 */
    if ((*(long *)(lVar2 + 0x20) != 0) && (FUN_007a08e8(lVar2), *(long *)(lVar2 + 0x28) == 0)) {
      FUN_002ee710(*(undefined8 *)(lVar2 + 0x20));
    }
    FUN_002e2ea0(PTR_LAB_04373088,lVar2);
  }
  return;
}


