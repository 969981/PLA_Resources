/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039b300; name: FUN_0039b300
 */


void FUN_0039b300(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long local_38;
  long local_30;
  undefined8 uStack_28;
  
  uVar1 = FUN_0039bcc0();
  local_30 = 0;
  uStack_28 = 0;
  local_38 = 0;
                    /* try { // try from 0039b320 to 0039b32b has its CatchHandler @ 0039b3a4 */
  FUN_00387324(uVar1,param_1,&local_38);
  if (local_30 != local_38) {
    uVar3 = 0;
    do {
                    /* try { // try from 0039b340 to 0039b34b has its CatchHandler @ 0039b3b4 */
      FUN_00383a6c(uVar1,param_1,*(undefined8 *)(local_38 + uVar3 * 8));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(local_30 - local_38 >> 3));
  }
                    /* try { // try from 0039b360 to 0039b37b has its CatchHandler @ 0039b3a4 */
  plVar2 = (long *)FUN_00380d6c(uVar1,param_1);
  if (*plVar2 != plVar2[1]) {
    FUN_0030cac0();
  }
  if (local_38 != 0) {
    local_30 = local_38;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return;
}


