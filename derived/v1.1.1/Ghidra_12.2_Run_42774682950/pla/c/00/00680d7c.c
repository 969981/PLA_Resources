/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00680d7c; name: FUN_00680d7c
 */


void FUN_00680d7c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  byte local_50;
  undefined7 uStack_4f;
  ulong local_40;
  long *plStack_38;
  
  lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x20);
  if (lVar2 != 0) {
                    /* try { // try from 00680db0 to 00680dbb has its CatchHandler @ 00680e7c */
    FUN_006903b4(lVar2,0);
  }
  uVar3 = FUN_0064e8e0(param_3);
                    /* try { // try from 00680dc8 to 00680e03 has its CatchHandler @ 00680eb0 */
  FUN_0069032c(lVar2,uVar3);
  if (*(int *)(lVar2 + 0x1c) == 3) {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
  }
  else {
    FUN_00690214(lVar2);
    *(undefined4 *)(lVar2 + 0x1c) = 3;
    puVar4 = (ulong *)(*(ulong *)(lVar2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    uVar3 = FUN_0069d090(puVar4);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
  }
  FUN_0064fd7c(&local_50,param_2);
  uVar1 = (ulong)&local_50 | 1;
  if ((local_50 & 1) != 0) {
    uVar1 = local_40;
  }
                    /* try { // try from 00680e30 to 00680e37 has its CatchHandler @ 00680e80 */
  FUN_0065b17c(uVar3,uVar1);
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  *param_1 = lVar2;
  return;
}


