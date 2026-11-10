/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f03c0; name: FUN_004f03c0
 */


undefined8 FUN_004f03c0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  
  lVar3 = FUN_004bf700(param_1,param_2,0);
  if (lVar3 == 0) {
    uVar6 = 0x53c;
    uVar5 = 0xf8;
  }
  else {
    iVar2 = FUN_004dd600(param_1,lVar3,0x10003,1);
    if (iVar2 == 0) {
      uVar5 = FUN_004c4200(param_1);
      iVar2 = FUN_00407710(uVar5,lVar3);
      if (iVar2 < 0) {
        uVar5 = 0x105;
        uVar6 = 0x54e;
      }
      else {
        piVar7 = *(int **)(param_1 + 8);
        uVar1 = *(uint *)(*(long *)(piVar7 + 0x30) + 0x60);
        if (((((uVar1 >> 3 & 1) == 0) && (0x303 < *piVar7)) && (*piVar7 != 0x10000)) &&
           ((lVar8 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238), lVar8 != 0 &&
            (*(int *)(lVar8 + 0x18) != *(int *)(lVar3 + 0x18))))) {
          uVar5 = 0x105;
          uVar6 = 0x556;
        }
        else {
          lVar8 = *(long *)(param_1 + 0x508);
          if (*(long *)(lVar8 + 0x1f8) != 0) {
            *(ulong *)(lVar8 + 0x200) = (ulong)*(uint *)(*(long *)(lVar8 + 0x1f8) + 0x18);
          }
          if ((*(int *)(param_1 + 200) == 0) ||
             (*(ulong *)(lVar8 + 0x200) == (ulong)*(uint *)(lVar3 + 0x18))) {
LAB_004f04c8:
            *(long *)(*(long *)(param_1 + 0xa8) + 0x238) = lVar3;
            return 1;
          }
          if (((uVar1 >> 3 & 1) == 0) && ((0x303 < *piVar7 && (*piVar7 != 0x10000)))) {
            lVar8 = FUN_004bda40(*(undefined4 *)(lVar3 + 0x40));
            lVar4 = FUN_004bda40(*(undefined4 *)
                                  (*(long *)(*(long *)(param_1 + 0x508) + 0x1f8) + 0x40));
            if (lVar8 == lVar4) goto LAB_004f04c8;
            uVar5 = 0xda;
            uVar6 = 0x56b;
          }
          else {
            uVar5 = 0xc5;
            uVar6 = 0x574;
          }
        }
      }
    }
    else {
      uVar5 = 0x105;
      uVar6 = 0x545;
    }
  }
  FUN_004c99a0(param_1,0x2f,0x21c,uVar5,"external/openssl/ssl/statem/statem_clnt.c",uVar6);
  return 0;
}


