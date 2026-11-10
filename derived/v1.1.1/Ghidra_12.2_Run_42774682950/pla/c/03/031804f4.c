/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031804f4; name: FUN_031804f4
 */


void FUN_031804f4(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_90 [32];
  long local_70;
  undefined1 *puStack_68;
  
  *param_1 = &PTR_LAB_042f5c70;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  FUN_033299e0(0x7dae5151);
  iVar1 = *(int *)(param_2 + 0x20);
  FUN_033299e0(0xa0275451);
  FUN_001d49e4(auStack_90);
  FUN_001d4be4(auStack_90,iVar1);
  FUN_033299e0(0xf022e075);
  local_70 = param_2;
  puStack_68 = auStack_90;
  if (iVar1 != 0) {
    iVar6 = 0;
    uVar7 = 0x73237a;
    puStack_68 = auStack_90;
    do {
      while( true ) {
        iVar2 = iVar1 - iVar6;
        iVar8 = iVar2;
        if (0x4e < iVar2) {
          iVar8 = 0x4f;
        }
        if (0 < iVar2) {
          iVar2 = iVar8 + iVar6;
          do {
            FUN_03181514(&local_70,iVar6);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2);
        }
        bVar3 = CARRY4(iVar8 * 0xcd32be,uVar7);
        uVar7 = iVar8 * 0xcd32be + uVar7;
        if (bVar3) break;
        if (iVar6 == iVar1) goto LAB_031805e0;
      }
      FUN_033299e0(0x7cf180c1);
    } while (iVar6 != iVar1);
  }
LAB_031805e0:
  FUN_033299e0(0xc942f028);
  FUN_001d54ec(auStack_90);
  FUN_033299e0(0xe1762101);
  lVar4 = FUN_032cf5b0(0x20);
  FUN_001d7ff4();
  FUN_001d80ac(lVar4,auStack_90);
  lVar5 = param_1[3];
  if (lVar5 != lVar4) {
    if (lVar4 != 0) {
      FUN_032d645c(lVar4);
      lVar5 = param_1[3];
    }
    param_1[3] = lVar4;
    if (lVar5 != 0) {
      FUN_032d647c();
    }
  }
  FUN_033299e0(0x685c359d);
  if (lVar4 != 0) {
    FUN_032d647c(lVar4);
  }
  FUN_001d4b10(auStack_90);
  return;
}


