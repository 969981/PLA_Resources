/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064ec48; name: FUN_0064ec48
 */


void FUN_0064ec48(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  int local_24;
  
  if (*param_1 == 0) {
    lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (lVar1 != 0) {
                    /* try { // try from 0064ec7c to 0064ec87 has its CatchHandler @ 0064ed1c */
      FUN_00696378(lVar1,0);
    }
    *param_1 = lVar1;
  }
                    /* try { // try from 0064ec8c to 0064ec97 has its CatchHandler @ 0064ed20 */
  FUN_002deb18(auStack_40,0);
  if (local_24 != 3) {
                    /* try { // try from 0064eca4 to 0064ecfb has its CatchHandler @ 0064ed24 */
    FUN_002de8d8(auStack_40);
    local_24 = 3;
  }
  lVar1 = *param_1;
  local_30 = param_2;
  if (*(int *)(lVar1 + 0x24) == 4) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  else {
    FUN_006962a8(lVar1);
    *(undefined4 *)(lVar1 + 0x24) = 4;
    puVar3 = (ulong *)(*(ulong *)(lVar1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    uVar2 = FUN_002e17cc(puVar3);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  FUN_002e03d4(uVar2,auStack_40);
  FUN_002ded3c(auStack_40);
  return;
}


