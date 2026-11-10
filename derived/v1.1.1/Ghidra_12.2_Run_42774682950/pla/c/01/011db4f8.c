/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011db4f8; name: FUN_011db4f8
 */


void FUN_011db4f8(long param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    bVar1 = *(byte *)((long)param_2 + 10);
    bVar2 = *(byte *)(param_2 + 1);
    if (*(long *)(param_1 + 0x448) != 0) {
      FUN_0284ef04(*(long *)(param_1 + 0x448),*(undefined8 *)(*(long *)(lVar3 + 0x70) + 0x60),0,0);
    }
    FUN_011db77c(param_1,lVar3,0);
    FUN_011dba30(param_1,bVar1 & 1,0);
    FUN_011dbcec(param_1,bVar2 & 1,0);
    lVar3 = param_2[2];
    if (lVar3 != 0) {
      bVar1 = *(byte *)((long)param_2 + 0x1a);
      bVar2 = *(byte *)(param_2 + 3);
      if (*(long *)(param_1 + 0x448) != 0) {
        FUN_0284ef04(*(long *)(param_1 + 0x448) + 0xd0,
                     *(undefined8 *)(*(long *)(lVar3 + 0x70) + 0x60),0,0);
      }
      FUN_011db77c(param_1,lVar3,1);
      FUN_011dba30(param_1,bVar1 & 1,1);
      FUN_011dbcec(param_1,bVar2 & 1,1);
      lVar3 = param_2[4];
      if (lVar3 != 0) {
        bVar1 = *(byte *)((long)param_2 + 0x2a);
        bVar2 = *(byte *)(param_2 + 5);
        if (*(long *)(param_1 + 0x448) != 0) {
          FUN_0284ef04(*(long *)(param_1 + 0x448) + 0x1a0,
                       *(undefined8 *)(*(long *)(lVar3 + 0x70) + 0x60),0,0);
        }
        FUN_011db77c(param_1,lVar3,2);
        FUN_011dba30(param_1,bVar1 & 1,2);
        FUN_011dbcec(param_1,bVar2 & 1,2);
        lVar3 = param_2[6];
        if (lVar3 != 0) {
          bVar1 = *(byte *)((long)param_2 + 0x3a);
          bVar2 = *(byte *)(param_2 + 7);
          if (*(long *)(param_1 + 0x448) != 0) {
            FUN_0284ef04(*(long *)(param_1 + 0x448) + 0x270,
                         *(undefined8 *)(*(long *)(lVar3 + 0x70) + 0x60),0,0);
          }
          FUN_011db77c(param_1,lVar3,3);
          FUN_011dba30(param_1,bVar1 & 1,3);
          FUN_011dbcec(param_1,bVar2 & 1,3);
          lVar3 = param_2[8];
          if (lVar3 != 0) {
            bVar1 = *(byte *)((long)param_2 + 0x4a);
            bVar2 = *(byte *)(param_2 + 9);
            if (*(long *)(param_1 + 0x448) != 0) {
              FUN_0284ef04(*(long *)(param_1 + 0x448) + 0x340,
                           *(undefined8 *)(*(long *)(lVar3 + 0x70) + 0x60),0,0);
            }
            FUN_011db77c(param_1,lVar3,4);
            FUN_011dba30(param_1,bVar1 & 1,4);
            FUN_011dbcec(param_1,bVar2 & 1,4);
            lVar3 = param_2[10];
            if (lVar3 != 0) {
              bVar1 = *(byte *)((long)param_2 + 0x5a);
              bVar2 = *(byte *)(param_2 + 0xb);
              if (*(long *)(param_1 + 0x448) != 0) {
                FUN_0284ef04(*(long *)(param_1 + 0x448) + 0x410,
                             *(undefined8 *)(*(long *)(lVar3 + 0x70) + 0x60),0,0);
              }
              FUN_011db77c(param_1,lVar3,5);
              FUN_011dba30(param_1,bVar1 & 1,5);
              FUN_011dbcec(param_1,bVar2 & 1,5);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


