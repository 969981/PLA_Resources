/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b75ac; name: FUN_005b75ac
 */


void FUN_005b75ac(undefined8 param_1,int *param_2)

{
  int iVar1;
  ulong local_58 [3];
  ulong *local_40;
  undefined *puStack_38;
  int *local_30;
  undefined *puStack_28;
  
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[0] = 0;
  iVar1 = *param_2;
  if (iVar1 == 2) {
                    /* try { // try from 005b7664 to 005b768f has its CatchHandler @ 005b7694 */
    FUN_00291910(local_58,"regex match",0xb);
LAB_005b75f4:
    if (*param_2 == 2) {
      local_30 = *(int **)(param_2 + 8);
      goto LAB_005b760c;
    }
  }
  else {
    if (iVar1 == 1) {
      FUN_00291910(local_58,"prefix match",0xc);
      goto LAB_005b75f4;
    }
    if (iVar1 == 0) {
                    /* try { // try from 005b75e0 to 005b75f3 has its CatchHandler @ 005b7694 */
      FUN_00291910(local_58,"path match",10);
      goto LAB_005b75f4;
    }
  }
  local_30 = param_2 + 2;
LAB_005b760c:
  local_40 = local_58;
  puStack_38 = PTR_LAB_04374a18;
  puStack_28 = PTR_LAB_04374a18;
                    /* try { // try from 005b7620 to 005b763b has its CatchHandler @ 005b76a4 */
  FUN_002e6390(param_1,"Path %s:/%s/",0xc,&local_40,2);
  if ((local_58[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_58[2]);
  }
  return;
}


