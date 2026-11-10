/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dbafc; name: FUN_001dbafc
 */


undefined4 FUN_001dbafc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  long local_58;
  char local_48 [4];
  int local_44;
  
  uVar3 = 0x2b;
  if (param_1 != 0) {
    if (*(undefined1 **)(param_1 + 0x678) != (undefined1 *)0x0) {
      **(undefined1 **)(param_1 + 0x678) = 0;
    }
    if (*(long *)(param_1 + 0xd8) == 0) {
      lVar5 = *(long *)(param_1 + 0xe0);
      if (lVar5 == 0) {
        lVar5 = FUN_001e682c(1,3);
        if (lVar5 == 0) {
          return 0x1b;
        }
        *(long *)(param_1 + 0xe0) = lVar5;
      }
      if (*(char *)(lVar5 + 0x1e0) == '\0') {
        FUN_001e9004(lVar5,6,*(undefined8 *)(param_1 + 0xed8));
        iVar1 = FUN_001e693c(lVar5,param_1);
        if (iVar1 == 0) {
          bVar6 = false;
          uVar3 = 0;
          *(long *)(param_1 + 0xd8) = lVar5;
          do {
            local_44 = 0;
            local_48[0] = '\0';
            iVar1 = FUN_001e7768(lVar5,0,0,1000,0,local_48);
            if (iVar1 == 0) {
              if ((local_48[0] == '\0') && (FUN_001e952c(lVar5,&local_58), local_58 != 0)) {
                if (1000 < local_58) {
                  local_58 = 1000;
                }
                FUN_001f3494(local_58);
              }
              iVar1 = FUN_001e7ba8(lVar5,&local_44);
            }
            if ((local_44 == 0 && iVar1 == 0) && (lVar2 = FUN_001e8ee8(lVar5,&local_58), lVar2 != 0)
               ) {
              uVar3 = *(undefined4 *)(lVar2 + 0x10);
              bVar6 = true;
            }
          } while ((iVar1 == 0) && (!bVar6));
          uVar4 = 0x1b;
          if (iVar1 != 3) {
            uVar4 = 0x2b;
          }
          if (iVar1 != 0) {
            uVar3 = uVar4;
          }
          FUN_001e6dbc(lVar5,param_1);
        }
        else {
          FUN_001e8dd0(lVar5);
          uVar3 = 0x1b;
          if (iVar1 != 3) {
            uVar3 = 2;
          }
        }
      }
      else {
        uVar3 = 0x5d;
      }
    }
    else {
      FUN_001f3ae0(param_1,"easy handle already used in multi handle");
      uVar3 = 2;
    }
  }
  return uVar3;
}


