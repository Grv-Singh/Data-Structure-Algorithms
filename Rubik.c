#include<stdio.h>
#include<malloc.h>

struct link_list{
    char color;
    struct link_list *right;
    struct link_list *up;
    struct link_list *left;
    struct link_list *down;
};
typedef struct link_list node;

node *start, *new1, *first;

void create(node *);
void display(node *);

void main(){
    FM = (node *) malloc(sizeof(node));
    BM = (node *) malloc(sizeof(node));
    TM = (node *) malloc(sizeof(node));
    DM = (node *) malloc(sizeof(node));
    LM = (node *) malloc(sizeof(node));
    RM = (node *) malloc(sizeof(node));

    create_middle(FM);
    create_middle(BM);
    create_middle(TM);
    create_middle(BM);
    create_middle(RM);
    create_middle(LM);

    FRE = (node *) malloc(sizeof(node));
    FLE = (node *) malloc(sizeof(node));
    FTE = (node *) malloc(sizeof(node));
    FBE = (node *) malloc(sizeof(node));

    create_edge(FRE);
    create_edge(FLE);
    create_edge(FTE);
    create_edge(FBE);

    BRE = (node *) malloc(sizeof(node));
    BLE = (node *) malloc(sizeof(node));
    BTE = (node *) malloc(sizeof(node));
    BBE = (node *) malloc(sizeof(node));

    create_edge(BRE);
    create_edge(BLE);
    create_edge(BTE);
    create_edge(BBE);

    TRE = (node *) malloc(sizeof(node));
    TLE = (node *) malloc(sizeof(node));
    TTE = (node *) malloc(sizeof(node));
    TBE = (node *) malloc(sizeof(node));

    create_edge(TRE);
    create_edge(TLE);
    create_edge(TTE);
    create_edge(TBE);

    DRE = (node *) malloc(sizeof(node));
    DLE = (node *) malloc(sizeof(node));
    DTE = (node *) malloc(sizeof(node));
    DBE = (node *) malloc(sizeof(node));

    create_edge(DRE);
    create_edge(DLE);
    create_edge(DTE);
    create_edge(DBE);

    LRE = (node *) malloc(sizeof(node));
    LLE = (node *) malloc(sizeof(node));
    LTE = (node *) malloc(sizeof(node));
    LBE = (node *) malloc(sizeof(node));

    create_edge(LRE);
    create_edge(LLE);
    create_edge(LTE);
    create_edge(LBE);

    RRE = (node *) malloc(sizeof(node));
    RLE = (node *) malloc(sizeof(node));
    RTE = (node *) malloc(sizeof(node));
    RBE = (node *) malloc(sizeof(node));

    create_edge(RRE);
    create_edge(RLE);
    create_edge(RTE);
    create_edge(RBE);

    FTLC = (node *) malloc(sizeof(node));
    FTRC = (node *) malloc(sizeof(node));
    FDLC = (node *) malloc(sizeof(node));
    FDRC = (node *) malloc(sizeof(node));

    create_corner(FTLC);
    create_corner(FTRC);
    create_corner(FDLC);
    create_corner(FDRC);

    BTLC = (node *) malloc(sizeof(node));
    BTRC = (node *) malloc(sizeof(node));
    BDLC = (node *) malloc(sizeof(node));
    BDRC = (node *) malloc(sizeof(node));

    create_corner(BTLC);
    create_corner(BTRC);
    create_corner(BDLC);
    create_corner(BDRC);

    RTLC = (node *) malloc(sizeof(node));
    RTRC = (node *) malloc(sizeof(node));
    RDLC = (node *) malloc(sizeof(node));
    RDRC = (node *) malloc(sizeof(node));

    create_corner(RTLC);
    create_corner(RTRC);
    create_corner(RDLC);
    create_corner(RDRC);

    LTLC = (node *) malloc(sizeof(node));
    LTRC = (node *) malloc(sizeof(node));
    LDLC = (node *) malloc(sizeof(node));
    LDRC = (node *) malloc(sizeof(node));

    create_corner(LTLC);
    create_corner(LTRC);
    create_corner(LDLC);
    create_corner(LDRC);

    TTLC = (node *) malloc(sizeof(node));
    TTRC = (node *) malloc(sizeof(node));
    TDLC = (node *) malloc(sizeof(node));
    TDRC = (node *) malloc(sizeof(node));

    create_corner(TTLC);
    create_corner(TTRC);
    create_corner(TDLC);
    create_corner(TDRC);

    DTLC = (node *) malloc(sizeof(node));
    DTRC = (node *) malloc(sizeof(node));
    DDLC = (node *) malloc(sizeof(node));
    DDRC = (node *) malloc(sizeof(node));

    create_corner(DTLC);
    create_corner(DTRC);
    create_corner(DDLC);
    create_corner(DDRC);

    FM->top=FTE;
    FM->right=FRE;
    FM->down=FBE;
    FM->left=FLE;

    FTE->down=FRE->left=FBE->top=FLE->right=FM;

    FTRC->left=FTE;
    FTRC->down=FRE;

    FDRC->left=FBE;
    FDRC->top=FRE;

    FDLC->right=FBE;
    FDLC->top=FLE;

    FTLC->right=FTE;
    FTLC->down=FLE;

    FTLC->top=TDLC;
    FTLC->left=LTRC;

    FTE->top=TBE;

    FTRC->top=TDRC;
    FTRC->right=RTLC;

    FRE->right=RLE;

    FDRC->right=RDLC;
    FDRC->down=DTRC;

    FBE->down=DTE;

    FDLC->left=LDRC;
    FDLC->down=DTLC;

    FLE->left=LRE;

    //=====================================================

    TM->top=TTE;
    TM->right=TRE;
    TM->down=TBE;
    TM->left=TLE;

    TTE->down=TRE->left=TBE->top=TLE->right=TM;

    TTRC->left=TTE;
    TTRC->down=TRE;

    TDRC->left=TBE;
    TDRC->top=TRE;

    TDLC->right=TBE;
    TDLC->top=TLE;

    TTLC->right=TTE;
    TTLC->down=TLE;

    TTLC->top=BTRC;
    TTLC->left=LTLC;

    TTE->top=BTE;

    TTRC->top=BTLC;
    TTRC->right=RTRC;

    TRE->right=RTE;

    TDRC->right=RTLC;
    TDRC->down=FTRC;

    TBE->down=FTE;

    TDLC->left=LTRC;
    TDLC->down=FTLC;

    TLE->left=LTE;

//========================================================

    RM->top=RTE;
    RM->right=RRE;
    RM->down=RBE;
    RM->left=RLE;

    RTE->down=RRE->left=RBE->top=RLE->right=TM;

    RTRC->left=RTE;
    RTRC->down=RRE;

    RDRC->left=RBE;
    RDRC->top=RRE;

    RDLC->right=RBE;
    RDLC->top=RLE;

    RTLC->right=RTE;
    RTLC->down=RLE;

    RTLC->top=TDRC;
    RTLC->left=FTRC;

    RTE->top=TRE;

    RTRC->top=TTRC;
    RTRC->right=BTLC;

    RRE->right=BLE;

    RDRC->right=BDLC;
    RDRC->down=DDRC;

    RBE->down=DRE;

    RDLC->left=FDRC;
    RDLC->down=DTRC;

    RLE->left=FRE;

//===========================================================

    BM->top=BTE;
    BM->right=BRE;
    BM->down=BBE;
    BM->left=BLE;

    BTE->down=BRE->left=BBE->top=BLE->right=BM;

    BTRC->left=BTE;
    BTRC->down=BRE;

    BDRC->left=BBE;
    BDRC->top=BRE;

    BDLC->right=BBE;
    BDLC->top=BLE;

    BTLC->right=BTE;
    BTLC->down=BLE;

    BTLC->top=TTRC;
    BTLC->left=RTRC;

    BTE->top=TTE;

    BTRC->top=TTLC;
    BTRC->right=LTLC;

    BRE->right=LLE;

    BDRC->right=LDLC;
    BDRC->down=DTLC;

    BBE->down=DTE;

    BDLC->left=RDRC;
    BDLC->down=DTRC;

    BLE->left=RRE;

//======================================================

    DM->top=DTE;
    DM->right=DRE;
    DM->down=DBE;
    DM->left=DLE;

    DTE->down=DRE->left=DBE->top=DLE->right=DM;

    DTRC->left=DTE;
    DTRC->down=DRE;

    DDRC->left=DBE;
    DDRC->top=DRE;

    DDLC->right=DBE;
    DDLC->top=DLE;

    DTLC->right=DTE;
    DTLC->down=DLE;

    DTLC->top=BDRC;
    DTLC->left=LDLC;

    DTE->top=BBE;

    DTRC->top=BDLC;
    DTRC->right=DTE;

    DRE->right=BE;

    DDRC->right=LDRC;
    DDRC->down=FDLC;

    DBE->down=DTE;

    DDLC->left=RDLC;
    DDLC->down=FDLC;

    DLE->left=RBE;

//===========================================

    LM->top=LTE;
    LM->right=LRE;
    LM->down=LBE;
    LM->left=LLE;

    LTE->down=LRE->left=LBE->top=LLE->right=LM;

    LTRC->left=LTE;
    LTRC->down=LRE;

    LDRC->left=LBE;
    LDRC->top=LRE;

    LDLC->right=LBE;
    LDLC->top=LLE;

    LTLC->right=LTE;
    LTLC->down=LLE;

    LTLC->top=TTLC;
    LTLC->left=BTRC;

    LTE->top=TLE;

    LTRC->top=TDLC;
    LTRC->right=FTLC;

    LRE->right=FLE;

    LDRC->right=FDLC;
    LDRC->down=DDLC;

    LBE->down=DRE;

    LDLC->left=RDRC;
    LDLC->down=DTRC;

    LLE->left=RRE;

//====================================

    create(start);
    display(start);
    getchar();
}

void create_middle(node *ptr){
    ptr->right = (node *) malloc(sizeof(node));
    ptr->left = (node *) malloc(sizeof(node));
    ptr->top = (node *) malloc(sizeof(node));
    ptr->down = (node *) malloc(sizeof(node));
    ptr->up->down=ptr;
    ptr->down->up=ptr;
    ptr->right->left=ptr;
    ptr->left->right=ptr;
}

void create_edge(node *ptr){
    ptr->right = (node *) malloc(sizeof(node));
    ptr->left = (node *) malloc(sizeof(node));
    ptr->top = (node *) malloc(sizeof(node));
    ptr->down = (node *) malloc(sizeof(node));
    ptr->up->down=ptr;
    ptr->down->up=ptr;
    ptr->right->left=ptr;
    ptr->left->right=ptr;
}

void create_corner(node *ptr){
    ptr->right = (node *) malloc(sizeof(node));
    ptr->left = (node *) malloc(sizeof(node));
    ptr->top = (node *) malloc(sizeof(node));
    ptr->down = (node *) malloc(sizeof(node));
    ptr->up->down=ptr;
    ptr->down->up=ptr;
    ptr->right->left=ptr;
    ptr->left->right=ptr;
}

void create(node *ptr){
    char ch;
    start->info = 'R';
    printf("\n Enter e for Exit any other key for continue: ");
    ch = getchar();
    if(ch=='e'){
        free(ptr);
        exit(0);
    }else{
        if(ptr->right==NULL){
            ptr->right = (node *) malloc(sizeof(node));
        }
        if(ptr->up==NULL){
            ptr->up = (node *) malloc(sizeof(node));
        }
        if(ptr->left==NULL){
            ptr->left = (node *) malloc(sizeof(node));
        }
        if(ptr->down==NULL){
            ptr->down = (node *) malloc(sizeof(node));
        }
        ptr->right->left=ptr;
        ptr->left->right=ptr;
        ptr->up->down=ptr;
        ptr->down->up=ptr;
        ptr=ptr->right;
        printf("\n Input the value of the right node : ");
        scanf("%c", &ptr->info);
        ptr=ptr->left->left;
        printf("\n Input the value of the left node : ");
        scanf("%c", &ptr->info);
        ptr=ptr->right->top;
        printf("\n Input the value of the top node : ");
        scanf("%c", &ptr->info);
        ptr=ptr->down->down;
        printf("\n Input the value of the down node : ");
        scanf("%c", &ptr->info);
        fflush(stdin);
    }
    ptr=ptr->right;
    goto pnt;

    ptr->up = (node *) malloc(sizeof(node));
    ptr=ptr->up;
        printf("\n Input the value of the upper node : %d:",(start->info+1));
        scanf("%c", &ptr->info);
        fflush(stdin);
            ptr->up = (node *)malloc(sizeof(node));
            ptr = ptr->up;
        start->info++;

    ptr->left = (node *) malloc(sizeof(node));
    ptr=ptr->left;
        printf("\n Input the value of the left node : %d:",(start->info+1));
        scanf("%c", &ptr->info);
        fflush(stdin);
            ptr->left = (node *)malloc(sizeof(node));
            ptr = ptr->left;
        start->info++;

    ptr->down = (node *) malloc(sizeof(node));
    ptr=ptr->down;
        printf("\n Input the value of the node down : %d:",(start->info+1));
        scanf("%c", &ptr->info);
        fflush(stdin);
            ptr->down = (node *)malloc(sizeof(node));
            ptr = ptr->down;
        start->info++;
    //ptr->next=NULL;
    //printf("\n Total nodes = %d", start->info);
    ptr->up->down=ptr;
    ptr->left->right=ptr;
    ptr->down->up=ptr;
    ptr->right->left=ptr;
}

void create_right(node *ptr){
    char ch;
    start->info = 'B';
    printf("\n Enter e for Exit any other key for continue: ");
    ch = getchar();
    if(ch=='e'){
        free(ptr);
        exit(0);
    }
    ptr->right = (node *) malloc(sizeof(node));
    ptr=ptr->right;
        printf("\n Input the value of the right node : %d:",(start->info+1));
        scanf("%c", &ptr->info);
        fflush(stdin);
            ptr->right = (node *)malloc(sizeof(node));
            ptr = ptr->right;
        start->info++;

    ptr->up = (node *) malloc(sizeof(node));
    ptr=ptr->up;
        printf("\n Input the value of the upper node : %d:",(start->info+1));
        scanf("%c", &ptr->info);
        fflush(stdin);
            ptr->up = (node *)malloc(sizeof(node));
            ptr = ptr->up;
        start->info++;

    ptr->down = (node *) malloc(sizeof(node));
    ptr=ptr->down;
        printf("\n Input the value of the node down : %d:",(start->info+1));
        scanf("%c", &ptr->info);
        fflush(stdin);
            ptr->down = (node *)malloc(sizeof(node));
            ptr = ptr->down;
        start->info++;
    //ptr->next=NULL;
    //printf("\n Total nodes = %d", start->info);
    ptr->up->down=ptr;
    ptr->down->up=ptr;
    ptr->right->left=ptr;
}

void display(node *ptr){
    while(ptr->right!=NULL){
        printf("%d",ptr->info);
    }
}
