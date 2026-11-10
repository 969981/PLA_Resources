/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e782a0; name: FUN_02e782a0
 */


int FUN_02e782a0(code *param_1,uint param_2,undefined8 param_3,int param_4,int param_5,int param_6)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  
  nn::os::LockMutex((MutexType *)&DAT_0440a210);
  iVar8 = 0x1f;
  if ((param_1 != (code *)0x0) && (param_2 < 0x800)) {
    if (param_2 == 0) {
      iVar8 = 1;
    }
    else {
      uVar11 = 1;
      uVar5 = 1;
      do {
        uVar5 = uVar5 & param_2;
        if (uVar5 == 0) {
          iVar8 = 1;
        }
        else {
          uVar1 = (ulong)(uVar11 - 1);
          iVar8 = 0;
          if (uVar5 != 0x80 && uVar5 != 1) {
            iVar8 = param_4 + param_5 * 0x10 + param_6 * 0x10000;
          }
          puVar10 = (uint *)(&DAT_0440a238 + uVar1 * 2);
          uVar2 = *puVar10;
          puVar9 = (uint *)((long)&DAT_0440a238 + uVar1 * 0x10 + 4);
          uVar5 = *puVar9;
          if (uVar2 < uVar5) {
LAB_02e783a0:
            if (uVar2 < uVar5) {
              uVar5 = *puVar10;
              lVar7 = (&DAT_0440a230)[uVar1 * 2];
              *puVar10 = uVar5 + 1;
              puVar6 = (undefined8 *)(lVar7 + (ulong)uVar5 * 0x18);
              if (puVar6 != (undefined8 *)0x0) {
                lVar7 = lVar7 + (ulong)uVar5 * 0x18;
                *puVar6 = param_1;
                *(undefined8 *)(lVar7 + 8) = param_3;
                *(int *)(lVar7 + 0x10) = iVar8;
              }
            }
            else {
              puVar6 = (undefined8 *)0x0;
            }
          }
          else {
            iVar3 = uVar5 + (uVar5 >> 1);
            if (uVar5 == 0) {
              iVar3 = 1;
            }
            uVar4 = FUN_02e7997c(&DAT_0440a230 + uVar1 * 2,iVar3);
            if ((uVar4 & 1) != 0) {
              uVar5 = *puVar9;
              goto LAB_02e783a0;
            }
            puVar6 = (undefined8 *)0x0;
          }
          iVar8 = 0x34;
          if (puVar6 != (undefined8 *)0x0) {
            iVar8 = 1;
          }
        }
        uVar5 = 1 << (ulong)(uVar11 & 0x1f);
      } while ((uVar5 <= param_2) && (uVar11 = uVar11 + 1, iVar8 == 1));
      if (((param_2 & 1) != 0) && (iVar8 == 1)) {
        if (((DAT_0440a318 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0440a318), iVar3 != 0)) {
          DAT_0440a310 = &PTR_LAB_042a7050;
          __cxa_guard_release(&DAT_0440a318);
        }
        (*param_1)(&DAT_0440a310,1,param_3);
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
  return iVar8;
}


