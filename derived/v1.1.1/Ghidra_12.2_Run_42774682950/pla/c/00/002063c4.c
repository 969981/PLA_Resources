/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002063c4; name: FUN_002063c4
 */


void FUN_002063c4(long param_1)

{
  void *__s;
  long lVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *(byte *)(param_1 + 0x1ac);
  __s = (void *)(param_1 + 0x1a0);
  lVar1 = param_1 + 0x890;
  switch(bVar2) {
  case 0:
    break;
  case 1:
    FUN_0020c8a4(__s,lVar1);
    break;
  case 2:
    FUN_0020c8f0(__s);
    break;
  case 3:
    FUN_0020c914(__s);
    break;
  case 4:
    FUN_0020c940(__s,lVar1);
    FUN_0020c748(lVar1,*(undefined8 *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    break;
  case 5:
    FUN_0020c950(__s,lVar1);
    break;
  case 6:
    FUN_0020c994(__s);
    break;
  case 7:
    FUN_0020c9c0(__s,lVar1);
    break;
  case 8:
    FUN_0020c9f8(__s);
    break;
  default:
    uVar3 = (uint)bVar2;
    if ((1 << (ulong)(uVar3 & 7) & (uint)*(byte *)(param_1 + (ulong)(bVar2 >> 3) + 0x9ad)) == 0) {
      if (uVar3 == 0xc) {
        if ((*(byte *)(param_1 + 0x9a4) >> 1 & 1) != 0) {
          FUN_0020ca58(__s,lVar1);
        }
      }
      else if ((uVar3 == 10) && ((*(byte *)(param_1 + 0x9a4) & 1) != 0)) {
        FUN_0020ca3c(__s,lVar1);
      }
    }
    else {
      FUN_0020ca38(__s);
    }
  }
  memset(__s,0,0x60);
  *(undefined4 *)(param_1 + 0x280) = 2;
  FUN_0020c25c(param_1 + 0x208,param_1 + 0x284,9);
  *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0x228) + 9;
  FUN_0020c218(param_1 + 0x230,lVar1);
  FUN_0020c25c(param_1 + 0x230,0,0);
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  return;
}


