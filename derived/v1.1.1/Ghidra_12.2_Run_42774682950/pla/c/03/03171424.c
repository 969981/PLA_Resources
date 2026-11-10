/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03171424; name: FUN_03171424
 */


void FUN_03171424(long *param_1,long param_2,uint *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint local_68 [2];
  undefined4 *local_60;
  undefined4 uStack_58;
  undefined4 local_48 [2];
  long *local_38;
  
  *param_1 = 0;
  lVar2 = DAT_04434dc8;
  iVar1 = *(int *)(DAT_04434dc8 + 0x1c);
  *(bool *)(param_1 + 1) = 0 < iVar1;
  if (0 < iVar1) {
    lVar3 = tpidr_el0;
    lVar4 = *(long *)(lVar3 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar4;
    }
    lVar3 = *(long *)(lVar4 + 0x10);
    *param_1 = lVar3;
    if (lVar3 != 0) {
      FUN_032d5af0(lVar3,&DAT_0398be87,2);
    }
    lVar3 = *(long *)(*(long *)(param_2 + 0x38) + (ulong)(*param_3 >> 0x16) * 0xf0);
    FUN_031530a8(local_48,*(undefined4 *)(lVar2 + 0x20),
                 *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x180),0);
    local_60 = (undefined4 *)0x0;
    if (*param_1 != 0) {
      FUN_032d5c74(*param_1,&DAT_038f7b98,&local_60,&DAT_04356710,4,4);
      if (local_60 != (undefined4 *)0x0) {
        *local_60 = local_48[0];
      }
    }
    local_68[0] = *param_3 & 0x3fffff;
    FUN_03195eb0(lVar3,local_68,&local_60);
    local_38 = (long *)0x0;
    if (*param_1 != 0) {
      FUN_032d5c74(*param_1,&DAT_038f7b98,&local_38,&DAT_04356378,0xc,4);
      if (local_38 != (long *)0x0) {
        *local_38 = (long)local_60;
        *(undefined4 *)(local_38 + 1) = uStack_58;
      }
    }
  }
  return;
}


