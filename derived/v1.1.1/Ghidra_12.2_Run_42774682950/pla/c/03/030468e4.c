/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030468e4; name: FUN_030468e4
 */


void FUN_030468e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_0332448c(param_3,"hknpManifoldEvent ");
  uVar1 = FUN_0332448c(uVar1,(&PTR_s_CREATED_042b2718)[*(byte *)(param_1 + 0x18)]);
  uVar1 = FUN_0332448c(uVar1," bodyIds=");
  uVar1 = FUN_03324694(uVar1,*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_0332448c(uVar1,&DAT_038ee629);
  uVar1 = FUN_03324694(uVar1,*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_0332448c(uVar1," normal=");
  FUN_0332470c(uVar1,param_1 + 0x40);
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar2 = 0;
    lVar3 = 0x70;
    do {
      uVar1 = FUN_0332448c(param_3,"\n\t\tpos=");
      uVar1 = FUN_0332470c(uVar1,param_1 + lVar3);
      FUN_0332448c(uVar1," dist=");
      FUN_0332461c(*(undefined4 *)(param_1 + lVar2 * 4 + 0x60));
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 < *(int *)(param_1 + 0x30));
  }
  return;
}


