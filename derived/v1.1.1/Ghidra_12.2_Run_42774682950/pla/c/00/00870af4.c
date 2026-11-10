/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00870af4; name: FUN_00870af4
 */


void FUN_00870af4(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  Result *pRVar3;
  undefined4 local_80 [4];
  undefined4 local_70 [6];
  short local_58;
  int local_50 [4];
  
  pRVar3 = (Result *)local_80;
  lVar2 = *(long *)(param_2 + 0x6e8);
  if (0 < *(int *)(lVar2 + 4)) {
    FUN_007eb8b0(local_70);
    lVar2 = *(long *)(param_2 + 0x6e8);
  }
  FUN_007eb6ec(local_50,lVar2,2,2,0x11);
  do {
    if (local_50[0] != 0) {
      local_70[0] = 0x10408;
      local_80[0] = 0;
LAB_00870c20:
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),pRVar3);
      FUN_007ee578(param_1,local_70);
      return;
    }
    iVar1 = rand();
    FUN_007e3400(local_70);
    local_58 = (short)iVar1 +
               ((short)((ulong)((long)iVar1 * 0x51eb851f) >> 0x25) - (short)(iVar1 >> 0x1f)) * -100
               + -0x2928;
    FUN_007eb968(local_80,*(undefined8 *)(param_2 + 0x6e8),local_70,0,0);
    FUN_007ee660(local_50,local_80);
    if (local_50[0] == 0) {
      FUN_007e34a4(local_70);
      pRVar3 = (Result *)local_50;
      local_70[0] = 0;
      local_50[0] = 0;
      goto LAB_00870c20;
    }
    FUN_007eb8b0(local_80,*(undefined8 *)(param_2 + 0x6e8));
    FUN_007e34a4(local_70);
    FUN_007eb6ec(local_50,*(undefined8 *)(param_2 + 0x6e8),2,2,0x11);
  } while( true );
}


