/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f1424; name: FUN_001f1424
 */


undefined8 FUN_001f1424(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_0020b90c();
    uVar3 = 0;
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + 0x1e8);
      if (lVar4 == 0) {
        uVar3 = 0xfffffc7a;
      }
      else {
        *(undefined1 *)(lVar4 + 0x250) = 1;
        *(long *)(lVar2 + 0x1520) = *(long *)(lVar2 + 0x1520) + 1;
        *(long *)(param_4 + 0x5e0) = *(long *)(param_4 + 0x5e0) + 1;
        *(undefined4 *)(param_4 + 0x610) = param_3;
        iVar1 = FUN_0020b928(param_1,param_2,0);
        if (iVar1 != 0) {
          FUN_001f3934(lVar2,"http/2: failed to clear user_data for stream %d!\n",param_2);
        }
        if (*(int *)(param_4 + 0x5d8) == param_2) {
          *(undefined4 *)(param_4 + 0x5d8) = 0;
        }
        uVar3 = 0;
        *(undefined4 *)(lVar4 + 0x218) = 0;
      }
    }
  }
  return uVar3;
}


